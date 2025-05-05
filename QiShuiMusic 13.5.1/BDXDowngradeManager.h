@interface BDXDowngradeManager : NSObject
@property (nonatomic) BDXDowngradeModel downgradeModel;
- (id)downgradeModel;
- (BOOL)isHitDowngrade;
- (BOOL)isHitLoadDowngrade:;
- (BOOL)isHitLogDowngrade:;
- (BOOL)isHitRouterDowngrade:;
- (void)setDowngradeModel:;
- (void)updateDowngradeConfig:;
- (void).cxx_destruct;
+ (id)downgradeErrorWithTag:;
+ (id)shareInstance;
@end
