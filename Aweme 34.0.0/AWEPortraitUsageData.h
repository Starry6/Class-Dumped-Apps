@interface AWEPortraitUsageData : NSObject
@property (nonatomic) NSString date;
@property (nonatomic) NSDictionary strategy_usage;
@property (nonatomic) NSDictionary default_usage;
- (id)strategy_usage;
- (id)default_usage;
- (id)toEventParams;
- (void)setStrategy_usage:;
- (void)setDefault_usage:;
- (void)setDate:;
- (void)encodeWithCoder:;
- (id)description;
- (void).cxx_destruct;
- (id)date;
- (id)initWithCoder:;
@end
