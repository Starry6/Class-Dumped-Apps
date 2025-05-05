@interface BDCTCertificationFlow : BDCTFlow
@property (nonatomic) UIViewController webViewController;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) @? completionBlock;
- (void)finishFlowWithParams:progressType:;
- (void)finishWithResult:progressType:;
- (void)finishWithResult:progressType:showAlert:;
- (void)openCertificationUrl:;
- (void)dealloc;
- (void)setCompletionBlock:;
- (BOOL)isFinished;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)begin;
- (id)completionBlock;
- (void)setIsFinished:;
- (id)webViewController;
- (void)setWebViewController:;
@end
