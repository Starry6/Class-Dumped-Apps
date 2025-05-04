@interface AWEIMLiveSubscribeMemberGroupConversationFeatureConfig : AWEIMGeneralFansGroupConversationFeatureConfig
- (BOOL)enableLiveFansSubscriptionAutoRemoveWithConversation:permissionType:;
- (BOOL)enableEntryLimitWithConversation:permissionType:;
- (BOOL)enableAllowMemberInviteWithConversation:permissionType:;
- (BOOL)enableImportantAirBornMessageWithConversation:;
- (BOOL)enableGroupShareWithConversation:permissionType:;
- (id)groupDetailShareButtonTitleWithConversation:;
- (BOOL)enableGroupOwnerHighlightHintWithConversation:;
- (BOOL)enableFansGroupCommodityEntryWithConversation:;
- (BOOL)enableGroupOwnerMessageSearchWithConversation:permissionType:;
- (BOOL)enableFansGroupCouponEntryWithConversation:;
- (BOOL)enableChatPanelLiveAnnouncementEntry;
@end
