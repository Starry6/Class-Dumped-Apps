@interface AWEECCommentAreaAuthorizationManager : NSObject
+ (void)setUserAuthorizationAlertState:;
+ (void)setIsShowingUserAuthorizationAlertState:;
+ (void)postUserAuthorizationAlertState;
+ (void)requestUserAuthorizationAlertState;
+ (void)requestCommentAreaInitState;
+ (BOOL)getUserAuthorizationAlertState;
+ (BOOL)getIsShowingUserAuthorizationAlertState;
@end
