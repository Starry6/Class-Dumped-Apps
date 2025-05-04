@interface AWERCBaseVerifyViewController : UIViewController
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSString traceURL;
- (id)traceURL;
- (void)setTraceURL:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)instanceWithConfig:completion:;
@end
