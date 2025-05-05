@interface CSJDynamicShakeDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) CSJDynamicClickInfo clickInfo;
- (id)clickInfo;
- (void)p_acceleroMotionAction;
- (void)setClickInfo:;
- (void)shakeTriggerWithKey:;
- (void)startShake;
- (void)stopShake;
- (void)updateWithOriginShow:destShow:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)render;
@end
