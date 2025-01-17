#ifndef __SOUNDCLIP__
#define __SOUNDCLIP__

#include "mathlib/mathlib.h"
#include "mathlib/vector.h"

//
// SoundClip
// For sounds that are completely local to the executables machine
//
class SoundClip
{
private:
	float m_sndVolume;
	const char* m_sndPath;

	bool m_sndLoop;

public: 
	void CreateSoundClip(const char* path, float vol, bool loop);

	void SetVolume(float newVol);
	void SetLoop(bool newLoop);
};

//
// DynamicSoundClip
// For sounds that transform in 3d space
//
class DynamicSoundClip
{
private:
	float m_sndVolume; // max of 100.0f
	float m_sndRadius; // radius of where the sound can reach in game coords
	Vector3D m_sndPosition;
	const char* m_sndPath;

	bool m_sndLoop;

public:
	// initialization
	void CreateDynamicSoundClip(const char* path, float vol, float rad, Vector3D pos, bool loop);

	void SetVolume(float newVol);
	void SetRadius(float newRad);
	void SetPosition(Vector3D newPos);

	void SetLoop(bool newLoop);
};

#endif