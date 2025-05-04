@interface AWETabLandingDetailProtocolComponent : AWEUserDetailBaseComponent
@property (nonatomic) q hitTabLandingSchemaVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onConfigWithRouterParamDict:;
- (id)tabLandingCommonParams;
- (id)tabLandingSchemaVersionParams;
- (void)setHitTabLandingSchemaVersion:;
- (id)tabLandingLimitParams;
- (long long)hitTabLandingSchemaVersion;
- (void)onInit;
@end
