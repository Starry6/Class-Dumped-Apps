@interface AMapFutureRouteSearchResponse : AMapSearchObject
@property (nonatomic) NSArray paths;
@property (nonatomic) NSArray timeInfos;
- (void)setTimeInfos:;
- (id)timeInfos;
- (void)setPaths:;
- (id)paths;
- (void).cxx_destruct;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
