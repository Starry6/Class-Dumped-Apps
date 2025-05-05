@interface AMapTransitRouteSearchRequest : AMapRouteSearchBaseRequest
@property (nonatomic) q strategy;
@property (nonatomic) NSString city;
@property (nonatomic) NSString destinationCity;
@property (nonatomic) BOOL nightflag;
@property (nonatomic) BOOL requireExtension;
- (id)destinationCity;
- (BOOL)nightflag;
- (BOOL)requireExtension;
- (void)setDestinationCity:;
- (void)setNightflag:;
- (void)setRequireExtension:;
- (id)city;
- (id)init;
- (long long)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
- (void)setCity:;
+ (id)ajo_mapping;
@end
