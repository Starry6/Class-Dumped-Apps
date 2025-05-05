@interface AMapDistanceSearchRequest : AMapSearchObject
@property (nonatomic) NSArray origins;
@property (nonatomic) AMapGeoPoint destination;
@property (nonatomic) q type;
@property (nonatomic) q strategy;
@property (nonatomic) BOOL requireExtension;
- (BOOL)requireExtension;
- (void)setOrigins:;
- (void)setRequireExtension:;
- (void)setDestination:;
- (id)init;
- (long long)strategy;
- (void)setType:;
- (id)destination;
- (long long)type;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)origins;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
