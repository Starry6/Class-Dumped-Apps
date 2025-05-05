@interface IESECRouterTransferResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) UIViewController resultVC;
- (id)resultVC;
- (void)setResultVC:;
- (id)init;
- (void)setError:;
- (id)error;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
@end
