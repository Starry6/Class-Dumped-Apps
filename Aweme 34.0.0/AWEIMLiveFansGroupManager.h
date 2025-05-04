@interface AWEIMLiveFansGroupManager : NSObject
+ (void)checkAndAddLiveFansGroupInviteCardWithBizExtension:conversationID:;
+ (void)fetchLiveAdminUidSetWithParams:completion:;
+ (id)liveHost;
+ (void)getLiveFansGroupShareModelsCacheWithParams:completion:;
+ (void)fetchLiveFansGroupInviteUidListWithParams:completion:;
+ (void)fetchLiveFansGroupShareModelsWithParams:completion:;
@end
