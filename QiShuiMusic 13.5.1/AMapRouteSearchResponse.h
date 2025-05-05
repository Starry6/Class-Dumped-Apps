@interface AMapRouteSearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) AMapRoute route;
- (void)ajo_setValuesForKeysWithDictionary:;
- (void)setCount:;
- (void)setRoute:;
- (id)route;
- (void).cxx_destruct;
- (long long)count;
+ (id)ajo_mapping;
@end
