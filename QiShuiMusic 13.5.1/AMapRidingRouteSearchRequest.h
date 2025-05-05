@interface AMapRidingRouteSearchRequest : AMapRouteSearchBaseRequest
@property (nonatomic) q type;
@property (nonatomic) BOOL requireExtension;
- (BOOL)requireExtension;
- (void)setRequireExtension:;
- (id)init;
- (void)setType:;
- (long long)type;
+ (id)ajo_mapping;
@end
