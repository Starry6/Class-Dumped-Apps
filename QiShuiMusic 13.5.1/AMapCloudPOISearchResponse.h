@interface AMapCloudPOISearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) NSArray POIs;
- (id)POIs;
- (void)setPOIs:;
- (void)setCount:;
- (void).cxx_destruct;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
