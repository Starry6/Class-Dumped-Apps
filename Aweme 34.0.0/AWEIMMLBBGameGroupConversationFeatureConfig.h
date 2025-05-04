@interface AWEIMMLBBGameGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig
- (BOOL)enableEntryLimitWithConversation:permissionType:;
- (BOOL)enableGroupAvatarWithConversation:permissionType:;
- (BOOL)enableRefreshGroupManagementInfo;
- (BOOL)enableGroupNoticeBannerWithConversation:;
- (BOOL)enableLiveGroupAnnouncementBannerWithConversation:;
- (BOOL)enableFansGroupGroupNoticeTopBanner;
@end
