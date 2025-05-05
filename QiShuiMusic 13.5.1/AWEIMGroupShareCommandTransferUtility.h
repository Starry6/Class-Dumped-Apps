@interface AWEIMGroupShareCommandTransferUtility : NSObject
+ (id)eventNameWithShareType:;
+ (void)transferToIMShareWithToken:conversationID:shouldShowNotificationBar:;
+ (void)transferToUserPostWithAwemeID:onNavigationController:completion:;
+ (void)transferWithType:trackingParams:completion:;
@end
