@interface AWEIMMsgDBRebuildPopupHelper : NSObject
+ (BOOL)shouldShowPopupWithUserID:;
+ (void)showPopupIfNeededWithUserID:;
+ (void)checkCurrentSqliteVersion;
+ (void)trackRestartRecoverIfNeeded:;
@end
