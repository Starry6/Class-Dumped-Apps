@interface APBToygerOCRTask : APBToygerBaseTask
@property (nonatomic) UIViewController<APBTaskViewControllerProtocol> ocrVC;
- (void)exitWithResult:failReason:retCodeSub:retMessageSub:;
- (void)invokeWithPipeInfo:;
- (id)ocrVC;
- (void)processEvent:withCompletionCallback:;
- (void)setOcrVC:;
- (void).cxx_destruct;
@end
