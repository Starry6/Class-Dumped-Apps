@interface UIStatusBarExternalStyleAttributes : UIStatusBarNewUIStyleAttributes
- (double)heightForMetrics:;
- (BOOL)shouldShowInternalItemType:withScreenCapabilities:;
- (id)backgroundImageName;
- (long long)idiom;
- (long long)tapButtonType;
- (Class)foregroundStyleClass;
@end
