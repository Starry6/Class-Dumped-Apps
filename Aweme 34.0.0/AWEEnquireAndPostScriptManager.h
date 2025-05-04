@interface AWEEnquireAndPostScriptManager : NSObject
@property (nonatomic) BOOL isAlertDisplaying;
- (BOOL)isEnquireEnable;
- (void)showEnquireAlertForUser:enterFrom:completion:;
- (void)sendPostScriptTo:withText:completion:;
- (void)sendEnquireTo:withText:completion:;
- (BOOL)isPostScriptEnableForUser:;
- (id)lastPostScriptText;
- (void)trackPostScriptActionForUser:isSendClicked:;
- (BOOL)p_showAlert:forUser:lastInput:completion:;
- (void)increasePostScriptDisplayCount;
- (void)trackEnquireClickedForUser:enterFrom:;
- (void)trackEnquireActionForUser:enterFrom:isSendClicked:;
- (BOOL)isPostScriptABEnable;
- (BOOL)isPostScriptEnableInOneDay;
- (BOOL)isEnquireABEnable;
- (void)setIsAlertDisplaying:;
- (void)trackSendPostScriptMessage:relationTag:responseExtra:;
- (void)showPostScriptAlertForUser:shouldShow:completion:;
- (BOOL)isAlertDisplaying;
+ (void)storeLastPostScriptText:;
+ (id)sharedInstance;
@end
