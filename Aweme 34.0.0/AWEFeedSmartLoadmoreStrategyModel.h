@interface AWEFeedSmartLoadmoreStrategyModel : NSObject
@property (nonatomic) NSArray plan;
@property (nonatomic) NSArray labelIndexMapping;
@property (nonatomic) q defaultIndex;
- (id)labelIndexMapping;
- (void)setLabelIndexMapping:;
- (void)setPlan:;
- (id)plan;
- (void).cxx_destruct;
- (long long)defaultIndex;
- (void)setDefaultIndex:;
- (id)initWithJSONDict:;
@end
