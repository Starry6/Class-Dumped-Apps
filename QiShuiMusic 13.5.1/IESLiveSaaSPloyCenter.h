@interface IESLiveSaaSPloyCenter : NSObject
+ (BOOL)checkAndUpdateChargeBannerShowPolicyWithRoomID:tag:;
+ (BOOL)checkAndUpdatePrivilegeTipShowPolicyWithRoomID:;
+ (void)messageInteraction_updateToolbarTipCounterWithTimes:userID:messageType:expire:;
@end
