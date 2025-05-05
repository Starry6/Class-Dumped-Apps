@interface UIStatusBarLockScreenStyleAttributes : UIStatusBarNewUIStyleAttributes
- (double)heightForMetrics:;
- (BOOL)shouldShowInternalItemType:withScreenCapabilities:;
- (BOOL)isLockScreen;
- (Class)foregroundStyleClass;
@end
