@interface SCNEffect : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) SCNEffect presentationEffect;
@property (nonatomic) NSArray animationKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAnimation:;
- (void)dealloc;
- (void)setName:;
- (id)copy;
- (void)addAnimation:forKey:;
- (id)identifier;
- (id)initWithName:;
- (id)initWithCoder:;
- (id)scene;
- (id)valueForUndefinedKey:;
- (void)setObject:forKeyedSubscript:;
- (void)removeAllAnimations;
- (id)parameters;
- (void)encodeWithCoder:;
- (void)setValue:forUndefinedKey:;
- (id)objectForKeyedSubscript:;
- (id)description;
- (void)setParameters:;
- (id)name;
- (void)setIdentifier:;
- (id)copyWithZone:;
- (void)removeAnimationForKey:;
- (id)animationForKey:;
- (id)animationKeys;
- (id)animationPlayerForKey:;
- (id)animationManager;
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
- (void)_syncEntityObjCModel;
- (void)_syncObjCModel;
- (id)initWithVFXRef:;
- (id)initPresentationEffectWithVFXRef:;
- (id)presentationEffect;
- (id)vfxName;
- (id)vfxRef;
+ (BOOL)supportsSecureCoding;
+ (id)effectWithName:;
+ (id)effectWithVFXRef:;
@end
