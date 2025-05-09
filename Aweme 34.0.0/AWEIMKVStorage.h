@interface AWEIMKVStorage : IESIMStorage
- (id)aweim_getMultiTopFloatingTipsRemovedRecordForCid:type:;
- (BOOL)aweim_setMultiTopFloatingTipsRemovedRecordWithUniqueIds:type:cid:;
- (id)aweim_getMultiTopFloatingTipsRemovedRecordForCid:;
- (void)aweim_setMultiTopFloatingTipsConfigs:;
- (id)aweim_getMultiTopFloatingTipsConfigs;
- (id)aweim_showServiceTipViewKey;
- (BOOL)aweim_getLifeServiceChatMenuGuideShowFlagForUid:;
- (void)aweim_setLifeServiceChatMenuGuideShowFlagForUid:;
- (BOOL)aweim_serviceTipViewHasDisplayed;
- (double)im_friendConversationPopupLastShowTimestamp;
- (long long)im_friendConversationPopupShowedTimes;
- (void)im_increaseFriendConversationPopupShowedTimes;
- (void)im_setFriendConversationPopupLastShowTimestamp:;
- (void)aweim_setMigratingAuthorizationTopNoticeTipClosedStatus:forCid:;
- (void)aweim_setBCMigratingAuthorizationTopNoticeTipClosedStatus:forCid:;
- (void)aweim_setQualificationChangeTopNoticeTipClosedStatus:forCid:;
- (BOOL)aweim_getMigratingAuthorizationTopNoticeTipClosedStatusForCid:;
- (BOOL)aweim_getBCMigratingAuthorizationTopNoticeTipClosedStatusForCid:;
- (BOOL)aweim_getQualificationChangeTopNoticeTipClosedStatusForCid:;
- (BOOL)aweim_projectXAppInstalled;
- (BOOL)aweim_reportedProjectXAppInstalledStatus;
- (void)aweim_setProjectXAppInstalled:;
- (void)aweim_setReportedProjectXAppInstalledStatus:;
- (id)im_searchHistory;
- (void)im_setSearchHistory:;
- (BOOL)aweim_reportServiceChatResult;
- (void)aweim_setReportServiceChatResult:;
- (void)aweim_setServiceTipViewDisplayed:;
- (BOOL)aweim_setHasAnyGroupForShare:;
- (long long)aweim_getCurrrentDayDisplayShareRiskWarningCount;
- (id)aweim_getLastShowRiskWarningDateWithGid:;
- (void)aweim_setCurrentDayDisplayShareRiskWarningCount:;
- (void)aweim_setLastShowShareRiskWarningDateWithGid:;
- (id)getCurrentUserObjectOfClass:forKey:;
- (BOOL)setCurrentUserObject:forKey:;
- (BOOL)im_didInsertedRealNameRebindNoticeForUid:;
- (void)im_setDidInsertedRealNameRebindNoticeForUid:;
- (long long)im_FansClubLevelForTrackingWithSecUid:conversationId:;
- (void)im_setFansClubLevelForTrackingWithLevel:secUid:conversationId:;
- (void)im_removeAllObjectsForFansClubLevelForUid:;
- (void)im_setDidShowJoinGroupGetGiftsView:;
- (id)__aweim_MultiTopFloatingTipsConfigsKey;
- (id)__aweim_MultiTopFloatingTipsRemovedRecordKeyForCid:;
- (BOOL)im_didShowJoinGroupGetGiftsView;
- (long long)im_showJoinGroupGetGiftsTopTipTimes;
- (double)im_lastShowJoinGroupGetGiftsTopTipTime;
- (double)im_lastFetchJoinGroupGetGiftsStatusTime;
- (void)im_setLastFetchJoinGroupGetGiftsStatusTime:;
- (void)im_setLastShowJoinGroupGetGiftsTopTipTime:;
- (void)im_setShowJoinGroupGetGiftsTopTipTimes:;
- (void)im_setLiveGroupPeopleCountNoticeTipCloseTimeInterval:withCid:;
- (double)im_liveGroupPeopleCountNoticeTipCloseTimeIntervalWithCid:;
- (void)im_removeValueForLiveGroupPeopleCountNoticeTipCloseTimeIntervalWithCid:;
- (void)im_setDidFinishContextRecommendCreateGroup:cid:;
- (BOOL)im_didFinishContextRecommendCreateGroupForCid:;
- (id)im_relationExplainDateWithCid:;
- (void)im_appendFansClubLevelKey:forUid:;
- (id)im_liveGroupPeopleCountNoticeTipCloseTimeIntervalKeyWithCid:;
- (id)im_shouldShowBlockMessageTopTipViewTimeIntervalKey;
- (id)im_blockMessageTopTipViewCloseButtonTapTimesKey;
- (id)im_didInsertedRealNameRebindNoticeKeyForUid:;
- (id)im_friendConversationPopupShowedTimesKey;
- (id)im_friendConversationPopupLastShowTimestampKey;
- (id)im_messageTabTopBannerCacheKey;
- (id)__aweim_FoldBoxVersionKeyForUid:;
- (id)__aweim_StrangerBoxVersionKeyForUid:;
- (id)__aweim_LiveConsultBoxVersionKeyForUid:;
- (id)__aweim_ConvUnreadNeglectMuteVersionKeyForUid:;
- (id)__aweim_LifeServiceChatMenuGuideShowFlagForUid:;
- (id)__aweim_NormalGroupReverseUnreadDemoteStatusKeyForUid:;
- (id)__aweim_didFinishContextRecommendCreateGroupForCid:;
- (id)__aweim_LastEnterpriseModesSwitchStatusKeyForUid:;
- (id)__aweim_LastNotDisplayBoxSwitchStatusKeyForUid:;
- (id)__aweim_NoticeUpdateOptSwitchStatusKeyForUid:;
- (id)__aweim_ConvProcessedUnreadCountVersionKeyForUid:;
- (id)__aweim_NotDisplayBoxVersionKeyForUid:;
- (id)__aweim_UnreadBoxVersionKeyForUid:;
- (id)__aweim_ThreadChatVersionKeyForUid:;
- (id)__aweim_EnterpriseBoxVersionKeyForUid:;
- (id)__aweim_LastTimeGroupChatMuteLogicOptSwitchStatusKeyForUid:;
- (id)__aweim_groupChatPushOptSwitchStatusKeyForUid:;
- (id)__aweim_determineIsStrangerThroughCoreExtKeyForUid:;
- (id)__aweim_getHasEnterpriseInvalidConvModeKeyForUid:;
- (id)__aweim_MigratingAuthorizationTopNoticeTipClosedStatusKeyForCid:;
- (id)__aweim_BCMigratingAuthorizationTopNoticeTipClosedStatusKeyForCid:;
- (id)__aweim_QualificationChangeTopNoticeTipClosedStatusKeyForCid:;
- (id)aweim_lastShowShareRiskWarningDateKeyForGid:;
- (id)aweim_currrentDayDisplayCountKey;
- (id)aweim_reportServiceChatStatusKey;
- (id)aweim_keyForInstallStatus;
- (id)aweim_keyForIsFirstReport;
- (void)im_setFirstWatchRelationExplainDate:withCid:;
- (id)im_firstWatchRelationExplainDateWithCid:;
- (void)im_setFeedSkylightBoxTypeVersion:forUid:;
- (void)im_setDsConvFilterBoxTypeVersion:forUid:;
- (id)im_getDsConvFilterBoxTypeVersionForUid:;
- (id)im_getFeedSkylightBoxTypeVersionForUid:;
- (long long)im_getFeedSkylightBoxGroupFilterType:;
- (void)im_setFeedSkylightBoxGroupFilterType:;
- (void)im_setFeedSkylightEnableShow:;
- (BOOL)im_getFeedSkylightEnableShow;
- (void)im_setFeedSkylightLastShowTime:;
- (double)im_getFeedSkylightLastShowTime;
- (void)im_setItimacyAvatarLastDisapperTime:;
- (double)im_getItimacyAvatarLastDisapperTime;
- (double)im_shouldShowBlockMessageTopTipViewTimeInterval;
- (void)im_setShouldShowBlockMessageTopTipViewTimeInterval:;
- (long long)im_blockMessageTopTipViewCloseButtonTapTimes;
- (void)im_setBlockMessageTopTipViewCloseButtonTapTimes:;
- (id)im_messageTabTopBannerCache;
- (void)im_setMessageTabTopBannerCache:;
- (void)im_removeMessageTabTopBannerCache;
- (void)aweim_setFoldBoxVersion:forUid:;
- (id)aweim_getFoldBoxVersionForUid:;
- (void)aweim_setStrangerBoxVersion:forUid:;
- (id)aweim_getStrangerBoxVersionForUid:;
- (void)aweim_setStrangerTrashBoxVersion:forUid:;
- (id)aweim_getStrangerTrashBoxVersionForUid:;
- (void)aweim_setLiveConsultBoxVersion:forUid:;
- (id)aweim_getLiveConsultBoxVersionForUid:;
- (void)aweim_setConvUnreadNeglectMuteVersion:forUid:;
- (id)aweim_getConvUnreadNeglectMuteVersionForUid:;
- (void)aweim_setNormalGroupReverseUnreadDemoteStatus:forUid:;
- (BOOL)aweim_getNormalGroupReverseUnreadDemoteStatusForUid:;
- (id)__aweim_LastDbConvBatchUpdateFixSwitchStatusKeyForUid:;
- (id)__aweim_TotalUnreadCountFixStatusKeyForUid:;
- (void)aweim_setLastEnterpriseModesSwitchStatus:forUid:;
- (BOOL)aweim_getLastEnterpriseModesSwitchStatusForUid:;
- (void)aweim_setLastNotDisplayBoxSwitchStatus:forUid:;
- (BOOL)aweim_getLastNotDisplayBoxSwitchStatusForUid:;
- (void)aweim_setNoticeUpdateOptSwitchStatus:forUid:;
- (BOOL)aweim_getNoticeUpdateOptSwitchStatusForUid:;
- (void)aweim_setConvProcessedUnreadCountVersion:forUid:;
- (id)aweim_getConvProcessedUnreadCountVersionForUid:;
- (void)aweim_setNotDisplayBoxVersion:forUid:;
- (id)aweim_getNotDisplayBoxVersionForUid:;
- (void)aweim_setUnreadBoxVersion:forUid:;
- (id)aweim_getUnreadBoxVersionForUid:;
- (void)aweim_setThreadChatVersion:forUid:;
- (id)aweim_getThreadChatVersionForUid:;
- (void)aweim_setEnterpriseBoxVersion:forUid:;
- (id)aweim_getEnterpriseBoxVersionForUid:;
- (void)aweim_setLastTimeGroupChatMuteLogicOptSwitchStatus:forUid:;
- (void)aweim_setGroupChatPushOptSwitchStatus:forUid:;
- (BOOL)aweim_getDetermineIsStrangerThroughCoreExtKeyForUid:;
- (void)aweim_setDetermineIsStrangerThroughCoreExtKeyForUid:forUid:;
- (BOOL)aweim_getHasEnterpriseInvalidConvModeForUid:;
- (void)aweim_setHasEnterpriseInvalidConvModeForUidForUid:forUid:;
- (id)aweim_hasAnyGroupForShare;
- (long long)im_getNoticeMoveToSelfTipViewShowCount;
- (void)im_setNoticeMoveToSelfTipViewShowCount:;
- (long long)im_getNoticeMoveToSelfTipViewDeleteCount;
- (void)im_setNoticeMoveToSelfTipViewDeleteCount:;
- (long long)im_getNoticeMoveToSelfTipViewJumpCount;
- (void)im_setNoticeMoveToSelfTipViewJumpCount:;
- (id)p_keyWithCurrentUidPrefix:;
+ (id)IMKVStorage;
+ (id)dateFormatter;
+ (id)defaultStorage;
@end
