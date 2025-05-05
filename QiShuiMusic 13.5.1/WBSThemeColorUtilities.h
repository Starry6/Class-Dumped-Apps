@interface WBSThemeColorUtilities : NSObject
+ (id)updateThemeColorForWebView:darkModeEnabled:allowFallbackColors:updateUnderPageBackgroundColor:;
+ (BOOL)shouldOverrideTintColorForThemeColor:;
+ (id)updateThemeColorForWebView:darkModeEnabled:;
+ (id)overrideTabColorForThemeColor:;
+ (BOOL)shouldIgnoreThemeColorForContrastWithActiveTab:privateBrowsingEnabled:;
@end
