@interface AWEIMFansTracker : NSObject
+ (void)trackStayTime:;
+ (void)trackEnterPersonalDetail:;
+ (void)trackExpandFooterViewClick;
+ (void)trackRemoveFansToastWithEnterMethod:eventType:user:;
+ (void)trackQuickReplyWithEventType:userModel:;
+ (void)trackMessageCardInteractInCacheData:;
+ (void)trackFollowBackCardWithAction:viewModel:clickIndex:;
+ (void)trackerInnerMessageWithAction:viewModel:;
+ (void)trackShowEditRemarks:;
+ (void)trackFollowWitViewModel:;
+ (void)trackEnterChatWitUser:enterMethod:enterFrom:extraParams:;
+ (void)trackFollowCancelWitViewModel:;
+ (void)trackClickMoreButtonWithViewModel:;
+ (void)trackerInnerMessageWithModel:action:indexPath:ruleId:enterFrom:;
+ (id)extraTrackParamsWithRuleId:gdLabel:enterFrom:;
+ (void)trackClickRemoveFansWithEnterMethod:user:previousPage:;
+ (void)trackRemoveFansWithEnterMethod:enterFrom:user:;
+ (void)trackRelationPrivacySettingShow:user:;
+ (void)tranEnterNotificationPageWithActionType:;
+ (BOOL)showedUserIDsContainSuchUserWitViewModel:;
+ (void)trackFollowBackShowGreetWithUserModel:;
+ (void)trackRelationPrivacySettingShowWitUser:;
@end
