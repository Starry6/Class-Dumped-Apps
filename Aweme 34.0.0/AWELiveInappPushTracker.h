@interface AWELiveInappPushTracker : NSObject
+ (void)trackEvent:params:;
+ (void)trackInAppPushEventWithPushModel:actionType:;
+ (BOOL)enablePreview:;
+ (void)trackInAppPushLiveShowWithLivePushModel:;
+ (void)trackFriendRoomPushWithPushModel:event:actionType:;
+ (void)trackPushSDKPushClickedWithPushModel:;
+ (void)trackOpenLivePushWithPushModel:actionType:;
@end
