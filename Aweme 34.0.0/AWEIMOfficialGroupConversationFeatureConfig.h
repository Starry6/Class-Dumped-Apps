@interface AWEIMOfficialGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig
- (BOOL)enableEntryLimitWithConversation:permissionType:;
- (BOOL)enableAutoSyncLiveWithConversation:permissionType:;
- (BOOL)enableAutoSyncWorkWithConversation:permissionType:;
- (BOOL)enableGroupBlockWithConversation:permissionType:;
- (BOOL)enableGroupNoticeBannerWithConversation:;
- (BOOL)enableLiveGroupAnnouncementBannerWithConversation:;
- (BOOL)enableFansGroupGroupNoticeTopBanner;
@end
