@interface AWEIMGroupShareCommandTransferUtility : NSObject
+ (void)transferWithType:trackingParams:completion:;
+ (void)transferToUserPostWithAwemeID:onNavigationController:completion:;
+ (void)transferToIMShareWithToken:conversationID:shouldShowNotificationBar:;
+ (id)eventNameWithShareType:;
@end
