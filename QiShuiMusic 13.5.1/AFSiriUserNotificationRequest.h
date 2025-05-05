@interface AFSiriUserNotificationRequest : NSObject
- (void)performRequestWithCompletion:;
- (void).cxx_destruct;
- (id)initWithUserNotification:sourceAppId:;
- (id)initWithUserNotification:sourceAppId:platform:;
- (void)deactivateRequestForReason:completion:;
- (void)withdrawalRequestWithCompletion:;
+ (BOOL)canBeHandled;
+ (BOOL)supportedOnPlatform;
+ (BOOL)supportedForApplicationWithBundleId:;
@end
