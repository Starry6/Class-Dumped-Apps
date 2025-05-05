@interface CSJDynamicTwistDecorator : CSJDynamicAbstractDecorator
@property (nonatomic) CSJDynamicClickInfo clickInfo;
@property (nonatomic) CSJTwistManager twistManager;
- (id)clickInfo;
- (id)p_hashKey;
- (void)setClickInfo:;
- (void)setTwistManager:;
- (void)startTwist;
- (void)stopTwist;
- (void)twistAction;
- (id)twistManager;
- (void)updateWithOriginShow:destShow:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)render;
@end
