@interface AMapGeocodeSearchResponse : AMapSearchObject
@property (nonatomic) q count;
@property (nonatomic) NSArray geocodes;
- (id)geocodes;
- (void)setGeocodes:;
- (void)setCount:;
- (void).cxx_destruct;
- (long long)count;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
