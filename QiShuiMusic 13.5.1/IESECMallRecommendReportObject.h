@interface IESECMallRecommendReportObject : NSObject
@property (nonatomic) q index;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
- (long long)index;
- (id)eventName;
- (void)setEventName:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
