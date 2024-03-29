template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class CompositeCollider2D; template <> void RegisterClass<CompositeCollider2D>();
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; template <> void RegisterClass<TilemapCollider2D>();
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; template <> void RegisterClass<GridLayout>();
class Grid; template <> void RegisterClass<Grid>();
class Tilemap; template <> void RegisterClass<Tilemap>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; 
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } 
class Collider; 
class BoxCollider; 
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TilemapRenderer; template <> void RegisterClass<TilemapRenderer>();
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } 
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; 
class AudioClip; 
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; template <> void RegisterClass<CrashReportManager>();
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; 
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 71 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. GUIElement
	RegisterClass<GUIElement>();
	//6. GUILayer
	RegisterClass<GUILayer>();
	//7. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//8. Texture
	RegisterClass<Texture>();
	//9. NamedObject
	RegisterClass<NamedObject>();
	//10. RenderTexture
	RegisterClass<RenderTexture>();
	//11. Transform
	RegisterClass<Transform>();
	//12. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//13. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//14. Collider2D
	RegisterClass<Collider2D>();
	//15. Animator
	RegisterClass<Animator>();
	//16. PreloadData
	RegisterClass<PreloadData>();
	//17. Material
	RegisterClass<Material>();
	//18. Cubemap
	RegisterClass<Cubemap>();
	//19. Texture2D
	RegisterClass<Texture2D>();
	//20. Texture3D
	RegisterClass<Texture3D>();
	//21. Texture2DArray
	RegisterClass<Texture2DArray>();
	//22. Mesh
	RegisterClass<Mesh>();
	//23. MeshFilter
	RegisterClass<MeshFilter>();
	//24. MeshRenderer
	RegisterClass<MeshRenderer>();
	//25. Renderer
	RegisterClass<Renderer>();
	//26. Sprite
	RegisterClass<Sprite>();
	//27. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//28. BuildSettings
	RegisterClass<BuildSettings>();
	//29. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//30. GameManager
	RegisterClass<GameManager>();
	//31. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//32. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//33. InputManager
	RegisterClass<InputManager>();
	//34. PlayerSettings
	RegisterClass<PlayerSettings>();
	//35. ResourceManager
	RegisterClass<ResourceManager>();
	//36. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//37. ScriptMapper
	RegisterClass<ScriptMapper>();
	//38. TagManager
	RegisterClass<TagManager>();
	//39. TimeManager
	RegisterClass<TimeManager>();
	//40. QualitySettings
	RegisterClass<QualitySettings>();
	//41. MonoManager
	RegisterClass<MonoManager>();
	//42. Shader
	RegisterClass<Shader>();
	//43. MonoScript
	RegisterClass<MonoScript>();
	//44. TextAsset
	RegisterClass<TextAsset>();
	//45. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//46. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//47. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//48. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//49. AudioManager
	RegisterClass<AudioManager>();
	//50. CrashReportManager
	RegisterClass<CrashReportManager>();
	//51. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//52. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//53. AnimatorController
	RegisterClass<AnimatorController>();
	//54. RenderSettings
	RegisterClass<RenderSettings>();
	//55. LevelGameManager
	RegisterClass<LevelGameManager>();
	//56. LightmapSettings
	RegisterClass<LightmapSettings>();
	//57. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//58. TilemapRenderer
	RegisterClass<TilemapRenderer>();
	//59. Tilemap
	RegisterClass<Tilemap>();
	//60. GridLayout
	RegisterClass<GridLayout>();
	//61. TilemapCollider2D
	RegisterClass<TilemapCollider2D>();
	//62. AnimationClip
	RegisterClass<AnimationClip>();
	//63. Motion
	RegisterClass<Motion>();
	//64. Grid
	RegisterClass<Grid>();
	//65. AudioListener
	RegisterClass<AudioListener>();
	//66. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//67. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//68. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//69. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//70. CompositeCollider2D
	RegisterClass<CompositeCollider2D>();

}
