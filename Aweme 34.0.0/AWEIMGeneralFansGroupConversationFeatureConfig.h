@interface AWEIMGeneralFansGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig
- (BOOL)enableLiveSubscribeExpireHint;
- (BOOL)enableFansGroupFeedEmojiReplyWithConversation:;
- (BOOL)enableChatDetailHistoryMediaWithConversation:permissionType:;
- (BOOL)enableUsingFansGroupMuteStrategyWithConversation:;
- (BOOL)enableGroupOpenNoticeMessageWithConversation:;
- (BOOL)enableGroupWelcomeWithConversation:permissionType:;
- (BOOL)enableLiveFansSubscriptionAutoRemoveWithConversation:permissionType:;
- (BOOL)enableNotAllowSelfItemShareWithConversation:permissionType:;
- (BOOL)enableEditShowGroupEntranceOnUserProfileWithConversation:permissionType:;
- (BOOL)enableGroupBlockWithConversation:permissionType:;
- (BOOL)shouldDisableByTransferGroupWithConversation:featureType:;
- (unsigned long long)groupManagementFunctionSortStyle;
- (BOOL)enableMutingFilterWithConversation:;
- (BOOL)enableMuteSettingOptionFoldWithConversation:;
- (BOOL)enableMutingFilterWithBaseConversation:;
- (BOOL)enableMuteSettingWithConversation:;
- (BOOL)enableGroupAvatarWithConversation:permissionType:;
- (BOOL)enableDissolveGroupWithConversation:permissionType:;
- (BOOL)enableBanAdvUserJoinSwitchWithConversation:permissionType:;
- (BOOL)enableBanAskPraiseUserJoinSwitchWithConversation:permissionType:;
- (id)groupDetailShareButtonTitleWithConversation:;
- (BOOL)enableRefreshGroupManagementInfo;
- (BOOL)enableFansGroupCommodityEntryWithConversation:;
- (BOOL)enableVoteEntrance;
- (BOOL)enableShowPushGuideTipsView;
- (BOOL)enableInviteActiveFansJoinGroupSection;
- (BOOL)useFansGroupStyleForGroupMemberListPage;
- (BOOL)enableGroupNoticeBannerWithConversation:;
- (BOOL)enableLiveGroupAnnouncementBannerWithConversation:;
- (BOOL)enableGroupOwnerMessageSearchWithConversation:permissionType:;
- (BOOL)enableFansGroupCouponEntryWithConversation:;
- (BOOL)enableFansGroupMentionAll;
- (BOOL)enableFansGroupGroupNoticeTopBanner;
- (BOOL)enableFansGroupTopDynamicDomain;
- (BOOL)enableChatPanelLiveAnnouncementEntry;
- (BOOL)enableAddInviteFansGuidanceCardWithConversation:;
- (BOOL)isFansGroupType;
@end
