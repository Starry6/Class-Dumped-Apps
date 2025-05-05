@interface AMapDistrictSearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) NSArray districts;
- (id)districts;
- (void)setDistricts:;
- (void)setCount:;
- (void).cxx_destruct;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
