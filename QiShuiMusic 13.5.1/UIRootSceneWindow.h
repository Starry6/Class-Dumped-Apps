@interface UIRootSceneWindow : _UIRootWindow
@property (nonatomic) UIView _sceneContainerView;
@property (nonatomic) FBSDisplayConfiguration displayConfiguration;
@property (nonatomic) UIMutableTransformer sceneTransformer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)_usesWindowServerHitTesting;
- (id)_focusResponder;
- (void)setFrame:;
- (id)hitTest:withEvent:;
- (id)displayConfiguration;
- (id)initWithScreen:;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)initWithDisplay:;
- (BOOL)_appearsInLoupe;
- (id)initWithDisplayConfiguration:;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)transformsDidChange:;
- (void)_updateTransforms;
- (id)sceneTransformer;
- (id)_sceneContainerView;
+ (BOOL)_isSecure;
@end
