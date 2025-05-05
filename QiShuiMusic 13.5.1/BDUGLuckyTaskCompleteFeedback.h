@interface BDUGLuckyTaskCompleteFeedback : NSObject
+ (void)__showFeedback:;
+ (id)__doActionPathWithForceUpdate:;
+ (BOOL)__expireCheck:;
+ (void)__handleNotification:;
+ (void)__handlePopup:;
+ (void)__handleSidebar:;
+ (void)__handleToast:;
+ (id)__modifyLynxSchema:trackTag:;
+ (BOOL)__pageCheck:posURL:defaultValue:;
+ (id)__responseFilter;
+ (void)__sdkSettingsUpdate;
+ (void)__trackLetterReceive:;
+ (void)__trackPopupReceive:;
+ (void)__trackPopupRemoveBeforeEnqueue:reason:;
+ (void)__trackSidebarReceive:;
+ (void)__trackSidebarShow:success:reason:;
+ (void)__trackToastReceive:;
+ (id)__updateDoActionPath;
+ (void)initializeActivityTaskManager;
@end
