@interface AWETimorOpenPlatformManager : NSObject
- (void)requestIMGameFansEnterCheckWithGroupID:clientKey:openID:completion:;
- (void)shareGameAddGroupWithId:appID:isHalfPage:extraDict:completion:;
- (void)requestOpenIDWithAppID:completion:;
- (void)shareGameAddGroupWithId:appID:completion:;
+ (id)sharedManager;
@end
