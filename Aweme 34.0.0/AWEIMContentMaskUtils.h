@interface AWEIMContentMaskUtils : NSObject
+ (BOOL)shouldShowMosaic:;
+ (id)getMaskTitle:scene:;
+ (id)getMaskSubtitle:scene:;
+ (id)getMaskIconName:scene:;
+ (id)getMaskIconBackgroundName:scene:;
+ (double)getIconAndTitleSpacing:scene:;
+ (double)getIconWidthHeight:scene:;
+ (BOOL)showDefaultPlayIcon:scene:;
@end
