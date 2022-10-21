// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PARTICLESYSTEMDATA2_JET_FBS_H_
#define FLATBUFFERS_GENERATED_PARTICLESYSTEMDATA2_JET_FBS_H_

#include "flatbuffers/flatbuffers.h"

#include "basic_types_generated.h"

namespace HinaPE::FluidEngine
{
namespace fbs
{

struct ScalarParticleData2;

struct VectorParticleData2;

struct PointNeighborSearcherSerialized2;

struct ParticleNeighborList2;

struct ParticleSystemData2;

struct ScalarParticleData2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
    enum
    {
        VT_DATA = 4
    };
    const flatbuffers::Vector<double> *data() const
    {
        return GetPointer<const flatbuffers::Vector<double> *>(VT_DATA);
    }
    bool Verify(flatbuffers::Verifier &verifier) const
    {
        return VerifyTableStart(verifier) && VerifyOffset(verifier, VT_DATA) && verifier.Verify(data()) && verifier.EndTable();
    }
};

struct ScalarParticleData2Builder
{
    flatbuffers::FlatBufferBuilder &fbb_;
    flatbuffers::uoffset_t start_;
    void add_data(flatbuffers::Offset<flatbuffers::Vector<double>> data)
    {
        fbb_.AddOffset(ScalarParticleData2::VT_DATA, data);
    }
    ScalarParticleData2Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb)
    {
        start_ = fbb_.StartTable();
    }
    ScalarParticleData2Builder &operator=(const ScalarParticleData2Builder &);
    flatbuffers::Offset<ScalarParticleData2> Finish()
    {
        const auto end = fbb_.EndTable(start_, 1);
        auto o = flatbuffers::Offset<ScalarParticleData2>(end);
        return o;
    }
};

inline flatbuffers::Offset<ScalarParticleData2> CreateScalarParticleData2(flatbuffers::FlatBufferBuilder &_fbb, flatbuffers::Offset<flatbuffers::Vector<double>> data = 0)
{
    ScalarParticleData2Builder builder_(_fbb);
    builder_.add_data(data);
    return builder_.Finish();
}

inline flatbuffers::Offset<ScalarParticleData2> CreateScalarParticleData2Direct(flatbuffers::FlatBufferBuilder &_fbb, const std::vector<double> *data = nullptr)
{
    return HinaPE::FluidEngine::fbs::CreateScalarParticleData2(_fbb, data ? _fbb.CreateVector<double>(*data) : 0);
}

struct VectorParticleData2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
    enum
    {
        VT_DATA = 4
    };
    const flatbuffers::Vector<const HinaPE::FluidEngine::fbs::Vector2D *> *data() const
    {
        return GetPointer<const flatbuffers::Vector<const HinaPE::FluidEngine::fbs::Vector2D *> *>(VT_DATA);
    }
    bool Verify(flatbuffers::Verifier &verifier) const
    {
        return VerifyTableStart(verifier) && VerifyOffset(verifier, VT_DATA) && verifier.Verify(data()) && verifier.EndTable();
    }
};

struct VectorParticleData2Builder
{
    flatbuffers::FlatBufferBuilder &fbb_;
    flatbuffers::uoffset_t start_;
    void add_data(flatbuffers::Offset<flatbuffers::Vector<const HinaPE::FluidEngine::fbs::Vector2D *>> data)
    {
        fbb_.AddOffset(VectorParticleData2::VT_DATA, data);
    }
    VectorParticleData2Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb)
    {
        start_ = fbb_.StartTable();
    }
    VectorParticleData2Builder &operator=(const VectorParticleData2Builder &);
    flatbuffers::Offset<VectorParticleData2> Finish()
    {
        const auto end = fbb_.EndTable(start_, 1);
        auto o = flatbuffers::Offset<VectorParticleData2>(end);
        return o;
    }
};

inline flatbuffers::Offset<VectorParticleData2> CreateVectorParticleData2(flatbuffers::FlatBufferBuilder &_fbb, flatbuffers::Offset<flatbuffers::Vector<const HinaPE::FluidEngine::fbs::Vector2D *>> data = 0)
{
    VectorParticleData2Builder builder_(_fbb);
    builder_.add_data(data);
    return builder_.Finish();
}

inline flatbuffers::Offset<VectorParticleData2> CreateVectorParticleData2Direct(flatbuffers::FlatBufferBuilder &_fbb, const std::vector<const HinaPE::FluidEngine::fbs::Vector2D *> *data = nullptr)
{
    return HinaPE::FluidEngine::fbs::CreateVectorParticleData2(_fbb, data ? _fbb.CreateVector<const HinaPE::FluidEngine::fbs::Vector2D *>(*data) : 0);
}

struct PointNeighborSearcherSerialized2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
    enum
    {
        VT_TYPE = 4, VT_DATA = 6
    };
    const flatbuffers::String *type() const
    {
        return GetPointer<const flatbuffers::String *>(VT_TYPE);
    }
    const flatbuffers::Vector<uint8_t> *data() const
    {
        return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
    }
    bool Verify(flatbuffers::Verifier &verifier) const
    {
        return VerifyTableStart(verifier) && VerifyOffset(verifier, VT_TYPE) && verifier.Verify(type()) && VerifyOffset(verifier, VT_DATA) && verifier.Verify(data()) && verifier.EndTable();
    }
};

struct PointNeighborSearcherSerialized2Builder
{
    flatbuffers::FlatBufferBuilder &fbb_;
    flatbuffers::uoffset_t start_;
    void add_type(flatbuffers::Offset<flatbuffers::String> type)
    {
        fbb_.AddOffset(PointNeighborSearcherSerialized2::VT_TYPE, type);
    }
    void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data)
    {
        fbb_.AddOffset(PointNeighborSearcherSerialized2::VT_DATA, data);
    }
    PointNeighborSearcherSerialized2Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb)
    {
        start_ = fbb_.StartTable();
    }
    PointNeighborSearcherSerialized2Builder &operator=(const PointNeighborSearcherSerialized2Builder &);
    flatbuffers::Offset<PointNeighborSearcherSerialized2> Finish()
    {
        const auto end = fbb_.EndTable(start_, 2);
        auto o = flatbuffers::Offset<PointNeighborSearcherSerialized2>(end);
        return o;
    }
};

inline flatbuffers::Offset<PointNeighborSearcherSerialized2> CreatePointNeighborSearcherSerialized2(flatbuffers::FlatBufferBuilder &_fbb, flatbuffers::Offset<flatbuffers::String> type = 0, flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0)
{
    PointNeighborSearcherSerialized2Builder builder_(_fbb);
    builder_.add_data(data);
    builder_.add_type(type);
    return builder_.Finish();
}

inline flatbuffers::Offset<PointNeighborSearcherSerialized2> CreatePointNeighborSearcherSerialized2Direct(flatbuffers::FlatBufferBuilder &_fbb, const char *type = nullptr, const std::vector<uint8_t> *data = nullptr)
{
    return HinaPE::FluidEngine::fbs::CreatePointNeighborSearcherSerialized2(_fbb, type ? _fbb.CreateString(type) : 0, data ? _fbb.CreateVector<uint8_t>(*data) : 0);
}

struct ParticleNeighborList2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
    enum
    {
        VT_DATA = 4
    };
    const flatbuffers::Vector<uint64_t> *data() const
    {
        return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_DATA);
    }
    bool Verify(flatbuffers::Verifier &verifier) const
    {
        return VerifyTableStart(verifier) && VerifyOffset(verifier, VT_DATA) && verifier.Verify(data()) && verifier.EndTable();
    }
};

struct ParticleNeighborList2Builder
{
    flatbuffers::FlatBufferBuilder &fbb_;
    flatbuffers::uoffset_t start_;
    void add_data(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> data)
    {
        fbb_.AddOffset(ParticleNeighborList2::VT_DATA, data);
    }
    ParticleNeighborList2Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb)
    {
        start_ = fbb_.StartTable();
    }
    ParticleNeighborList2Builder &operator=(const ParticleNeighborList2Builder &);
    flatbuffers::Offset<ParticleNeighborList2> Finish()
    {
        const auto end = fbb_.EndTable(start_, 1);
        auto o = flatbuffers::Offset<ParticleNeighborList2>(end);
        return o;
    }
};

inline flatbuffers::Offset<ParticleNeighborList2> CreateParticleNeighborList2(flatbuffers::FlatBufferBuilder &_fbb, flatbuffers::Offset<flatbuffers::Vector<uint64_t>> data = 0)
{
    ParticleNeighborList2Builder builder_(_fbb);
    builder_.add_data(data);
    return builder_.Finish();
}

inline flatbuffers::Offset<ParticleNeighborList2> CreateParticleNeighborList2Direct(flatbuffers::FlatBufferBuilder &_fbb, const std::vector<uint64_t> *data = nullptr)
{
    return HinaPE::FluidEngine::fbs::CreateParticleNeighborList2(_fbb, data ? _fbb.CreateVector<uint64_t>(*data) : 0);
}

struct ParticleSystemData2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
    enum
    {
        VT_RADIUS = 4, VT_MASS = 6, VT_POSITIONIDX = 8, VT_VELOCITYIDX = 10, VT_FORCEIDX = 12, VT_SCALARDATALIST = 14, VT_VECTORDATALIST = 16, VT_NEIGHBORSEARCHER = 18, VT_NEIGHBORLISTS = 20
    };
    double radius() const
    {
        return GetField<double>(VT_RADIUS, 0.0);
    }
    double mass() const
    {
        return GetField<double>(VT_MASS, 0.0);
    }
    uint64_t positionIdx() const
    {
        return GetField<uint64_t>(VT_POSITIONIDX, 0);
    }
    uint64_t velocityIdx() const
    {
        return GetField<uint64_t>(VT_VELOCITYIDX, 0);
    }
    uint64_t forceIdx() const
    {
        return GetField<uint64_t>(VT_FORCEIDX, 0);
    }
    const flatbuffers::Vector<flatbuffers::Offset<ScalarParticleData2>> *scalarDataList() const
    {
        return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<ScalarParticleData2>> *>(VT_SCALARDATALIST);
    }
    const flatbuffers::Vector<flatbuffers::Offset<VectorParticleData2>> *vectorDataList() const
    {
        return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<VectorParticleData2>> *>(VT_VECTORDATALIST);
    }
    const PointNeighborSearcherSerialized2 *neighborSearcher() const
    {
        return GetPointer<const PointNeighborSearcherSerialized2 *>(VT_NEIGHBORSEARCHER);
    }
    const flatbuffers::Vector<flatbuffers::Offset<ParticleNeighborList2>> *neighborLists() const
    {
        return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<ParticleNeighborList2>> *>(VT_NEIGHBORLISTS);
    }
    bool Verify(flatbuffers::Verifier &verifier) const
    {
        return VerifyTableStart(verifier) && VerifyField<double>(verifier, VT_RADIUS) && VerifyField<double>(verifier, VT_MASS) && VerifyField<uint64_t>(verifier, VT_POSITIONIDX) && VerifyField<uint64_t>(verifier, VT_VELOCITYIDX) &&
               VerifyField<uint64_t>(verifier, VT_FORCEIDX) && VerifyOffset(verifier, VT_SCALARDATALIST) && verifier.Verify(scalarDataList()) && verifier.VerifyVectorOfTables(scalarDataList()) && VerifyOffset(verifier, VT_VECTORDATALIST) &&
               verifier.Verify(vectorDataList()) && verifier.VerifyVectorOfTables(vectorDataList()) && VerifyOffset(verifier, VT_NEIGHBORSEARCHER) && verifier.VerifyTable(neighborSearcher()) && VerifyOffset(verifier, VT_NEIGHBORLISTS) &&
               verifier.Verify(neighborLists()) && verifier.VerifyVectorOfTables(neighborLists()) && verifier.EndTable();
    }
};

struct ParticleSystemData2Builder
{
    flatbuffers::FlatBufferBuilder &fbb_;
    flatbuffers::uoffset_t start_;
    void add_radius(double radius)
    {
        fbb_.AddElement<double>(ParticleSystemData2::VT_RADIUS, radius, 0.0);
    }
    void add_mass(double mass)
    {
        fbb_.AddElement<double>(ParticleSystemData2::VT_MASS, mass, 0.0);
    }
    void add_positionIdx(uint64_t positionIdx)
    {
        fbb_.AddElement<uint64_t>(ParticleSystemData2::VT_POSITIONIDX, positionIdx, 0);
    }
    void add_velocityIdx(uint64_t velocityIdx)
    {
        fbb_.AddElement<uint64_t>(ParticleSystemData2::VT_VELOCITYIDX, velocityIdx, 0);
    }
    void add_forceIdx(uint64_t forceIdx)
    {
        fbb_.AddElement<uint64_t>(ParticleSystemData2::VT_FORCEIDX, forceIdx, 0);
    }
    void add_scalarDataList(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ScalarParticleData2>>> scalarDataList)
    {
        fbb_.AddOffset(ParticleSystemData2::VT_SCALARDATALIST, scalarDataList);
    }
    void add_vectorDataList(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<VectorParticleData2>>> vectorDataList)
    {
        fbb_.AddOffset(ParticleSystemData2::VT_VECTORDATALIST, vectorDataList);
    }
    void add_neighborSearcher(flatbuffers::Offset<PointNeighborSearcherSerialized2> neighborSearcher)
    {
        fbb_.AddOffset(ParticleSystemData2::VT_NEIGHBORSEARCHER, neighborSearcher);
    }
    void add_neighborLists(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ParticleNeighborList2>>> neighborLists)
    {
        fbb_.AddOffset(ParticleSystemData2::VT_NEIGHBORLISTS, neighborLists);
    }
    ParticleSystemData2Builder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb)
    {
        start_ = fbb_.StartTable();
    }
    ParticleSystemData2Builder &operator=(const ParticleSystemData2Builder &);
    flatbuffers::Offset<ParticleSystemData2> Finish()
    {
        const auto end = fbb_.EndTable(start_, 9);
        auto o = flatbuffers::Offset<ParticleSystemData2>(end);
        return o;
    }
};

inline flatbuffers::Offset<ParticleSystemData2> CreateParticleSystemData2(flatbuffers::FlatBufferBuilder &_fbb, double radius = 0.0, double mass = 0.0, uint64_t positionIdx = 0, uint64_t velocityIdx = 0, uint64_t forceIdx = 0,
                                                                          flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ScalarParticleData2>>> scalarDataList = 0,
                                                                          flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<VectorParticleData2>>> vectorDataList = 0, flatbuffers::Offset<PointNeighborSearcherSerialized2> neighborSearcher = 0,
                                                                          flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ParticleNeighborList2>>> neighborLists = 0)
{
    ParticleSystemData2Builder builder_(_fbb);
    builder_.add_forceIdx(forceIdx);
    builder_.add_velocityIdx(velocityIdx);
    builder_.add_positionIdx(positionIdx);
    builder_.add_mass(mass);
    builder_.add_radius(radius);
    builder_.add_neighborLists(neighborLists);
    builder_.add_neighborSearcher(neighborSearcher);
    builder_.add_vectorDataList(vectorDataList);
    builder_.add_scalarDataList(scalarDataList);
    return builder_.Finish();
}

inline flatbuffers::Offset<ParticleSystemData2> CreateParticleSystemData2Direct(flatbuffers::FlatBufferBuilder &_fbb, double radius = 0.0, double mass = 0.0, uint64_t positionIdx = 0, uint64_t velocityIdx = 0, uint64_t forceIdx = 0,
                                                                                const std::vector<flatbuffers::Offset<ScalarParticleData2>> *scalarDataList = nullptr, const std::vector<flatbuffers::Offset<VectorParticleData2>> *vectorDataList = nullptr,
                                                                                flatbuffers::Offset<PointNeighborSearcherSerialized2> neighborSearcher = 0, const std::vector<flatbuffers::Offset<ParticleNeighborList2>> *neighborLists = nullptr)
{
    return HinaPE::FluidEngine::fbs::CreateParticleSystemData2(_fbb, radius, mass, positionIdx, velocityIdx, forceIdx, scalarDataList ? _fbb.CreateVector<flatbuffers::Offset<ScalarParticleData2>>(*scalarDataList) : 0,
                                               vectorDataList ? _fbb.CreateVector<flatbuffers::Offset<VectorParticleData2>>(*vectorDataList) : 0, neighborSearcher, neighborLists ? _fbb.CreateVector<flatbuffers::Offset<ParticleNeighborList2>>(*neighborLists) : 0);
}

inline const HinaPE::FluidEngine::fbs::ParticleSystemData2 *GetParticleSystemData2(const void *buf)
{
    return flatbuffers::GetRoot<HinaPE::FluidEngine::fbs::ParticleSystemData2>(buf);
}

inline bool VerifyParticleSystemData2Buffer(flatbuffers::Verifier &verifier)
{
    return verifier.VerifyBuffer<HinaPE::FluidEngine::fbs::ParticleSystemData2>(nullptr);
}

inline void FinishParticleSystemData2Buffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<HinaPE::FluidEngine::fbs::ParticleSystemData2> root)
{
    fbb.Finish(root);
}

}  // namespace fbs
}  // namespace HinaPE::FluidEngine

#endif  // FLATBUFFERS_GENERATED_PARTICLESYSTEMDATA2_JET_FBS_H_
