#ifndef HINAPE_FLUID_API_H
#define HINAPE_FLUID_API_H

#include "common/geometry/bounding_box3.h"
#include "common/geometry/plane3.h"
#include "common/geometry/box3.h"
#include "common/geometry/cylinder3.h"
#include "common/geometry/rigid_body_collider3.h"
#include "common/geometry/sphere3.h"
#include "common/geometry/implicit_surface_set3.h"
#include "common/logging.h"
#include "common/array/array_utils-inl.h"
#include "../physics/fluid/solver/particle/sph/sph_solver3.h"
#include "../physics/fluid/solver/particle/pcisph/pci_sph_solver3.h"
#include "../physics/fluid/emitter/volume_particle_emitter3.h"
#include "../kasumi/renderer/scene/scene.h"
#include "../kasumi/renderer/gui/manager.h"
#include "../kasumi/common/animation/physics_animation.h"
#include "renderer/api.h"

class FluidAPI : public Kasumi::Api, public std::enable_shared_from_this<FluidAPI>
{
public:
    void step(Scene_Particles *, float dt) final;
    void gui(Kasumi::Manager &manager, Kasumi::Scene &scene, Kasumi::Undo &undo, Gui::Widgets &widgets, Scene_Maybe obj, int &index) override;

public:
    void load_solver();
    void load_pci_solver();
    void load_dam_breaking_solver();
    void add_emitter(const std::shared_ptr<HinaPE::Fluid::ParticleEmitter3>&);
    void add_collider(const std::shared_ptr<HinaPE::Collider3>&);
    void assign_particles_domain(const HinaPE::BoundingBox3D &);
    enum FluidType
    {
        SPH
    };
    struct FluidOpt
    {
        float target_density = 1000.f;
        float target_spacing = 0.05f;

        FluidType type = SPH;
        // SPH Field
        float pseudo_viscosity_coefficient = 0.f;
    };
    FluidOpt _fluid_opt;
    bool _solver_prepared = false;
    std::shared_ptr<HinaPE::Fluid::ParticleSystemSolver3> _solver_ptr;
    std::vector<std::shared_ptr<HinaPE::Fluid::ParticleEmitter3>> _emitter_ptr_list;
    std::vector<std::shared_ptr<HinaPE::Collider3>> _collider_ptr_list;
    HinaPE::BoundingBox3D _particles_domain;
};

#endif //HINAPE_FLUID_API_H
