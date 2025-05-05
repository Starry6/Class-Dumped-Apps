@interface BDUGLuckyTaskTimerXBridge : BDUGLuckyXBridgeMethod
@property (nonatomic) BDUGLuckyTaskTimerXBridgeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)__createPendantWithModel:;
- (void)__finishTaskWithModel:;
- (void)__setCountDownContainerHelper:;
- (void)__startTimerWithModel:;
- (void)__stopTimerWithModel:;
- (void)callWithParamModel:completionHandler:;
- (void)pendantIsReady;
- (void)pendantWillDestroy;
- (Class)resultModelClass;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (id)methodName;
@end
