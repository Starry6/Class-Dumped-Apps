@interface IESLatchLifeCircleCenter : NSObject
@property (nonatomic) NSMutableArray delegates;
- (void)latchContainer:didFinishCallJSB:withCallBackID:;
- (void)latchContainer:didFinishTransferJSBWithCallBackID:;
- (void)latchContainer:didReceivedLog:error:tag:extra:;
- (void)latchContainer:processorFinishWithStatus:cached:transferType:errMsg:timeout:engineType:perfInfo:;
- (void)latchContainer:willStartCallJSB:withCallBackID:;
- (void)latchContainer:willStartTransferJSBWithCallBackID:;
- (void)latchDidFinishEvaluateInitJSWithContainer:;
- (void)latchDidFinishEvaluatePrefetchJSWithContainer:;
- (void)latchDidFinishIOWithContainer:;
- (void)latchPrepareFinishWithContainer:;
- (void)latchWillStartAttachWithContainer:;
- (void)latchWillStartEvaluateInitJSWithContainer:;
- (void)latchWillStartEvaluatePrefetchJSWithContainer:;
- (void)latchWillStartIOWithContainer:;
- (void)registerLifeCircleDelegtae:;
- (void)unregisterLifeCircleDelegtae:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void).cxx_destruct;
+ (id)sharedCenter;
@end
