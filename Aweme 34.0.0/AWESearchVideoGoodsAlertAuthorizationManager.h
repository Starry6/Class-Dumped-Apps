@interface AWESearchVideoGoodsAlertAuthorizationManager : NSObject
+ (void)setUserAuthorizationAlertState:;
+ (void)setIsShowingUserAuthorizationAlertState:;
+ (BOOL)getUserAuthorizationAlertState;
+ (BOOL)getIsShowingUserAuthorizationAlertState;
+ (BOOL)shouldShowAuthorizationAlert;
@end
