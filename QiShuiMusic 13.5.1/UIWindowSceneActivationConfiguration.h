@interface UIWindowSceneActivationConfiguration : NSObject
@property (nonatomic) Q _animationSource;
@property (nonatomic) <_UIWindowSceneActivator> _sceneActivator;
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) UIWindowSceneActivationRequestOptions options;
@property (nonatomic) UITargetedPreview preview;
- (void)setOptions:;
- (id)initWithUserActivity:;
- (void)setPreview:;
- (id)options;
- (void).cxx_destruct;
- (id)userActivity;
- (id)description;
- (id)preview;
- (id)copyWithZone:;
- (unsigned long long)_animationSource;
- (void)_setAnimationSource:;
- (id)_sceneActivator;
- (void)_setSceneActivator:;
@end
