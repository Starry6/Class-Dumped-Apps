@interface AWEIMGroupImpl.GroupChainsService : HTSService
- (id)groupChainsSettingModel;
- (id)groupChainsTechConfigModel;
- (void)requestGroupChainById:conversation:requestSource:;
- (void)requestGroupChainByRangeWithConversation:requestSource:;
- (long long)getGroupChainsLastTime:;
- (void)openHunterContainerCreateGroupChainsWithConversation:;
- (void)openHunterContainerJoinGroupChainsWithMessage:conversation:;
- (void)preActiveGecko;
- (void)getLatestChainsInfoById:completion:;
- (void)getGroupUserInfoWithParam:completion:;
- (id)init;
- (void).cxx_destruct;
@end
