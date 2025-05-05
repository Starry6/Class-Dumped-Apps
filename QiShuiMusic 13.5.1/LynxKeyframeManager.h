@interface LynxKeyframeManager : NSObject
@property (nonatomic) LynxUI ui;
@property (nonatomic) BOOL autoResumeAnimation;
- (void)endAllAnimation;
- (void)attachToUI:;
- (BOOL)autoResumeAnimation;
- (void)detachFromUI;
- (BOOL)hasAnimationRunning;
- (id)initWithUI:;
- (void)notifyAnimationUpdated;
- (void)notifyBGLayerAdded;
- (void)notifyPropertyUpdated:value:;
- (void)setAutoResumeAnimation:;
- (void)setAnimation:;
- (void).cxx_destruct;
- (void)setAnimations:;
- (void)resumeAnimation;
- (id)ui;
- (void)resetAnimation;
- (void)setUi:;
- (void)restartAnimation;
@end
