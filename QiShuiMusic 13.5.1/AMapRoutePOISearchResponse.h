@interface AMapRoutePOISearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) NSArray pois;
- (void)setPois:;
- (void)setCount:;
- (void).cxx_destruct;
- (id)pois;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
