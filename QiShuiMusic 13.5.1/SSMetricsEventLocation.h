@interface SSMetricsEventLocation : NSObject
@property (nonatomic) q locationPosition;
@property (nonatomic) NSString locationType;
@property (nonatomic) NSDictionary reportingDictionary;
- (id)locationType;
- (id)reportingDictionary;
- (void).cxx_destruct;
- (void)setLocationType:;
- (void)setValue:forLocationKey:;
- (id)valueForLocationKey:;
- (long long)locationPosition;
- (void)setLocationPosition:;
@end
