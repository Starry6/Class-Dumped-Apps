@interface AMapDistrictSearchRequest : AMapSearchObject
@property (nonatomic) NSString keywords;
@property (nonatomic) BOOL requireExtension;
@property (nonatomic) BOOL showBusinessArea;
@property (nonatomic) q offset;
@property (nonatomic) q page;
@property (nonatomic) q subdistrict;
- (void)setSubdistrict:;
- (BOOL)requireExtension;
- (void)setRequireExtension:;
- (void)setShowBusinessArea:;
- (BOOL)showBusinessArea;
- (long long)subdistrict;
- (id)keywords;
- (void)setKeywords:;
- (long long)page;
- (void)setPage:;
- (void)setOffset:;
- (id)init;
- (long long)offset;
- (void).cxx_destruct;
+ (id)ajo_mapping;
@end
