@interface AWEUserConfiguration : NSObject
@property (nonatomic) <AWEUserTracker> tracker;
@property (nonatomic) <AWEUserCouplingProvider> couplingProvider;
- (id)couplingProvider;
- (void)setCouplingProvider:;
- (id)tracker;
- (id)initWithBlock:;
- (void)setTracker:;
- (void).cxx_destruct;
+ (id)configurationWithBlock:;
@end
