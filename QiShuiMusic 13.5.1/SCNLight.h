@interface SCNLight : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) @ color;
@property (nonatomic) double temperature;
@property (nonatomic) double intensity;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL castsShadow;
@property (nonatomic) @ shadowColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) {CGSize=dd} shadowMapSize;
@property (nonatomic) Q shadowSampleCount;
@property (nonatomic) q shadowMode;
@property (nonatomic) double shadowBias;
@property (nonatomic) BOOL automaticallyAdjustsShadowProjection;
@property (nonatomic) double maximumShadowDistance;
@property (nonatomic) BOOL forcesBackFaceCasters;
@property (nonatomic) BOOL sampleDistributedShadowMaps;
@property (nonatomic) Q shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (nonatomic) double orthographicScale;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (nonatomic) NSURL IESProfileURL;
@property (nonatomic) NSData sphericalHarmonicsCoefficients;
@property (nonatomic) q probeType;
@property (nonatomic) q probeUpdateType;
@property (nonatomic)  probeExtents;
@property (nonatomic)  probeOffset;
@property (nonatomic) BOOL parallaxCorrectionEnabled;
@property (nonatomic)  parallaxExtentsFactor;
@property (nonatomic)  parallaxCenterOffset;
@property (nonatomic) SCNMaterialProperty probeEnvironment;
@property (nonatomic) q areaType;
@property (nonatomic)  areaExtents;
@property (nonatomic) NSArray areaPolygonVertices;
@property (nonatomic) BOOL drawsArea;
@property (nonatomic) BOOL doubleSided;
@property (nonatomic) SCNMaterialProperty gobo;
@property (nonatomic) Q categoryBitMask;
@property (nonatomic) NSArray animationKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)shadowRadius;
- (void)addAnimation:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (id)copy;
- (id)technique;
- (void)setColor:;
- (void)setTemperature:;
- (void)addAnimation:forKey:;
- (void)setShadowRadius:;
- (id)identifier;
- (void)setType:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithCoder:;
- (id)scene;
- (void)removeAllAnimations;
- (void)setDoubleSided:;
- (id)color;
- (void)encodeWithCoder:;
- (id)type;
- (void)setAttribute:forKey:;
- (double)intensity;
- (id)shadowColor;
- (id)description;
- (id)name;
- (void)setShadowColor:;
- (double)temperature;
- (void)setIdentifier:;
- (void)setTechnique:;
- (id)copyWithZone:;
- (void)removeAnimationForKey:;
- (id)animationForKey:;
- (id)animationKeys;
- (BOOL)doubleSided;
- (unsigned long long)categoryBitMask;
- (void)setCategoryBitMask:;
- (void)setIntensity:;
- (id)attributeForKey:;
- (id)animationPlayerForKey:;
- (double)attenuationEndDistance;
- (double)spotInnerAngle;
- (double)spotOuterAngle;
- (double)orthographicScale;
- (double)shadowBias;
- (void)setShadowBias:;
- (id)animationManager;
- (double)zNear;
- (double)zFar;
- (void)setSpotInnerAngle:;
- (void)setSpotOuterAngle:;
- (id)sphericalHarmonicsCoefficients;
- (void)setShadowMode:;
- (long long)shadowMode;
- (void)setZNear:;
- (void)setZFar:;
- (void)setAttenuationEndDistance:;
- (void)setAttenuationStartDistance:;
- (void)setAttenuationFalloffExponent:;
- (double)attenuationStartDistance;
- (double)attenuationFalloffExponent;
- (void)setSphericalHarmonicsCoefficients:;
- (void)setProbeType:;
- (void)setProbeExtents:;
- (void)set_sphericalHarmonics:;
- (id)probeEnvironment;
- (void)setParallaxExtentsFactor:;
- (void)setParallaxCorrectionEnabled:;
- (void)setParallaxCenterOffset:;
- (void)setCastsShadow:;
- (id)__CFObject;
- (void)addAnimationPlayer:forKey:;
- (void)removeAllAnimationsWithBlendOutDuration:;
- (void)removeAnimationForKey:blendOutDuration:;
- (void)removeAnimationForKey:fadeOutDuration:;
- (void)pauseAnimationForKey:;
- (void)resumeAnimationForKey:;
- (void)setSpeed:forAnimationKey:;
- (BOOL)isAnimationForKeyPaused:;
- (id)sceneRef;
- (BOOL)__removeAnimation:forKey:;
- (void)_syncObjCAnimations;
- (id)_scnAnimationForKey:;
- (void)_copyAnimationsFrom:;
- (void)_pauseAnimation:forKey:pausedByNode:;
- (id)_scnBindings;
- (void)bindAnimatablePath:toObject:withKeyPath:options:;
- (void)unbindAnimatablePath:;
- (void)removeAllBindings;
- (id)copyAnimationChannelForKeyPath:animation:;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)initWithLightRef:;
- (id)initPresentationLightWithLightRef:;
- (id)lightRef;
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (id)presentationLight;
- (id)copyAnimationChannelForKeyPath:property:;
- (id)_sphericalHarmonics;
- (BOOL)shouldBakeDirectLighting;
- (void)setShouldBakeDirectLighting:;
- (BOOL)shouldBakeIndirectLighting;
- (void)setShouldBakeIndirectLighting:;
- (BOOL)isBaked;
- (void)setBaked:;
- (BOOL)castsShadow;
- (void)setOrthographicScale:;
- (id)shadowMapSize;
- (void)setShadowMapSize:;
- (unsigned long long)shadowSampleCount;
- (void)setShadowSampleCount:;
- (double)spotFalloffExponent;
- (void)setSpotFalloffExponent:;
- (void)_resyncObjCModelOfPerTypeParameters;
- (BOOL)usesDeferredShadows;
- (void)setUsesDeferredShadows:;
- (BOOL)usesModulatedMode;
- (void)setUsesModulatedMode:;
- (unsigned long long)shadowCascadeCount;
- (void)setShadowCascadeCount:;
- (BOOL)forceBackFaceCasters;
- (void)setForceBackFaceCasters:;
- (BOOL)adjustsShadowProjection;
- (void)setAdjustsShadowProjection:;
- (BOOL)automaticallyAdjustsShadowProjection;
- (void)setAutomaticallyAdjustsShadowProjection:;
- (double)maximumShadowDistance;
- (void)setMaximumShadowDistance:;
- (BOOL)forcesBackFaceCasters;
- (void)setForcesBackFaceCasters:;
- (BOOL)sampleDistributedShadowMaps;
- (void)setSampleDistributedShadowMaps:;
- (double)shadowCascadeSplittingFactor;
- (void)setShadowCascadeSplittingFactor:;
- (double)_shadowCascadeDebugFactor;
- (void)set_shadowCascadeDebugFactor:;
- (long long)probeType;
- (long long)probeUpdateType;
- (void)setProbeUpdateType:;
- (BOOL)parallaxCorrectionEnabled;
- (id)parallaxCenterOffset;
- (id)parallaxExtentsFactor;
- (id)probeExtents;
- (id)probeOffset;
- (void)setProbeOffset:;
- (long long)areaType;
- (void)setAreaType:;
- (id)areaExtents;
- (void)setAreaExtents:;
- (BOOL)drawsArea;
- (void)setDrawsArea:;
- (id)areaPolygonVertices;
- (void)setAreaPolygonVertices:;
- (BOOL)hasGobo;
- (id)gobo;
- (id)IESProfileURL;
- (void)setIESProfileURL:resolvedURL:;
- (void)setIESProfileURL:;
- (void)_customEncodingOfSCNLight:;
- (void)_customDecodingOfSCNLight:;
- (void)_didDecodeSCNLight:;
+ (BOOL)supportsSecureCoding;
+ (id)light;
+ (id)lightWithMDLLight:;
+ (id)lightWithMDLLightProbe:;
+ (id)lightWithLightRef:;
@end
