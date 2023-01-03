#ifndef HINAPE_API_H
#define HINAPE_API_H

#include "renderer/app.h"

#include "geometry/sphere3.h"
#include "emitter/volume_particle_emitter3.h"

class TestEmitter : public Kasumi::Api
{
public:
	void prepare() final;
	void key(int key, int scancode, int action, int mods) final;

public:
	void sync() const;
	void one_frame();
	double _time{0.0};

private:
	HinaPE::Fluid::ParticleEmitter3Ptr _emitter;
	HinaPE::Fluid::ParticleSystemData3Ptr _data;

	// scene part
	Kasumi::SceneObjectPtr _fluid_obj;
};

#endif //HINAPE_API_H
