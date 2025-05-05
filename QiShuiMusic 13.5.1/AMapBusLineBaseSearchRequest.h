@interface AMapBusLineBaseSearchRequest : AMapSearchObject
@property (nonatomic) NSString city;
@property (nonatomic) BOOL requireExtension;
@property (nonatomic) q offset;
@property (nonatomic) q page;
- (BOOL)requireExtension;
- (void)setRequireExtension:;
- (id)city;
- (long long)page;
- (void)setPage:;
- (void)setOffset:;
- (id)init;
- (long long)offset;
- (void).cxx_destruct;
- (void)setCity:;
+ (id)ajo_mapping;
@end
