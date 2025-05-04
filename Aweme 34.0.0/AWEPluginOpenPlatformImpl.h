@interface AWEPluginOpenPlatformImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bdp_joinGroupWithGroupID:appID:isHalfPage:extraDict:completion:;
- (id)bdp_allLocalScopes;
- (void)bdp_authScope:forClientKey:;
- (BOOL)bdp_checkScope:forClientKey:;
- (void)bdp_removeScope:forClientKey:;
- (void)bdp_getOpenIdWithappID:completion:;
+ (id)sharedPlugin;
@end
