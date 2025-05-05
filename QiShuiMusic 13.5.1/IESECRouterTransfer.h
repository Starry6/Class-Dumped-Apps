@interface IESECRouterTransfer : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString URLString;
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) @? completion;
- (void)addCustomHandleWithParam:;
- (void)preHandleWithSeachParam;
- (id)completion;
- (void)setCompletion:;
- (id)URLString;
- (id)sourceViewController;
- (void)setSourceViewController:;
- (void).cxx_destruct;
- (id)params;
- (void)setURLString:;
- (void)setParams:;
@end
