@interface AMapBusStopSearchRequest : AMapSearchObject
@property (nonatomic) NSString keywords;
@property (nonatomic) NSString city;
@property (nonatomic) q offset;
@property (nonatomic) q page;
- (id)city;
- (id)keywords;
- (void)setKeywords:;
- (long long)page;
- (void)setPage:;
- (void)setOffset:;
- (id)init;
- (long long)offset;
- (void).cxx_destruct;
- (void)setCity:;
+ (id)ajo_mapping;
@end
