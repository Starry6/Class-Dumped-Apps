@interface LynxKeyframeAnimator : NSObject
@property (nonatomic) LynxAnimationInfo info;
@property (nonatomic) Q state;
@property (nonatomic) LynxUI ui;
@property (nonatomic) NSMutableDictionary propertyOriginValue;
@property (nonatomic) BOOL autoResumeAnimation;
- (void)parseKeyframes:;
- (void)tryToResumeAnimationOnNextFrame;
- (void)sendCancelEvent;
- (void)addAnimationToLayer:name:animator:;
- (void)addOpacityAnimationToLayer:name:animator:;
- (void)applyAnimationInfo:;
- (void)attachToUI:;
- (BOOL)autoResumeAnimation;
- (void)detachFromUI;
- (id)getKeyframeEndStyles;
- (void)initAnimationDelegate;
- (id)initWithUI:;
- (BOOL)isAnimationExpired:;
- (BOOL)isPercentTransform;
- (void)notifyBGLayerAdded;
- (void)notifyPropertyUpdated:value:;
- (void)prepareKFValuesAndTimesContainer:;
- (id)propertyOriginValue;
- (id)recordLayerStyles;
- (id)recordPresentationLayerStyles;
- (void)removeAllAnimationFromLayer:;
- (void)restoreLayerStyles:;
- (void)setAutoResumeAnimation:;
- (void)setPropertyOriginValue:;
- (BOOL)shouldPerformRotateZInMatrix:;
- (BOOL)shouldReInitTransform;
- (void)tryToResumeAnimation:;
- (void)cancel;
- (void)dealloc;
- (void)setState:;
- (void)setInfo:;
- (void)finish;
- (void)pause:;
- (BOOL)isRunning;
- (void)run;
- (unsigned long long)state;
- (void)destroy;
- (void).cxx_destruct;
- (id)info;
- (void)apply:;
- (id)ui;
- (void)resume:;
- (void)setUi:;
+ (id)kBackgroundColorStr;
+ (id)kOpacityStr;
+ (id)kTransformStr;
@end
