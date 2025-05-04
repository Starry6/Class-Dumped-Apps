@interface AWEIMGroupBlockWhiteListInputVC : NSObject
@property (nonatomic) NSSet selectorWhiteListSet;
@property (nonatomic) UIViewController<AWEIMInputViewControllerProtocol> realInpuVC;
- (void)setRealInpuVC:;
- (id)selectorWhiteListSet;
- (id)realInpuVC;
- (void)setSelectorWhiteListSet:;
- (id)init;
- (id)forwardingTargetForSelector:;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:;
- (void)doesNotRecognizeSelector:;
- (void)doNothing;
+ (double)defaultInputHeight;
@end
