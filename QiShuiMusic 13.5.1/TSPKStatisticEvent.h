@interface TSPKStatisticEvent : TSPKBaseEvent
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSDictionary metric;
@property (nonatomic) NSDictionary category;
@property (nonatomic) NSDictionary attributes;
- (id)tag;
- (void)setServiceName:;
- (id)serviceName;
- (void)setAttributes:;
- (id)attributes;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)setMetric:;
- (id)metric;
- (id)category;
+ (id)initWithMethodName:startedTime:;
+ (id)initWithService:metric:category:attributes:;
@end
