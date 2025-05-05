@interface IESLiveDIOptimizeConfig : NSObject
@property (nonatomic) BOOL liveDIOptEnable;
@property (nonatomic) BOOL liveDILazyLoadEnable;
@property (nonatomic) BOOL liveDIServiceCache;
- (BOOL)liveDIOptEnable;
- (BOOL)liveDILazyLoadEnable;
- (BOOL)liveDIServiceCache;
- (void)setLiveDILazyLoadEnable:;
- (void)setLiveDIOptEnable:;
- (void)setLiveDIServiceCache:;
- (id)init;
+ (id)config;
@end
