@interface AWETemplateABHelper : NSObject
+ (BOOL)shouldIgnoreTemplateBar;
+ (BOOL)shouldReplaceFanQieNovelOldBar;
+ (BOOL)shouldReplaceDCarOldBar;
+ (id)sceneWhiteListForOldDCarBar;
+ (BOOL)shouldIgnorePreload;
+ (id)preloadWhiteListForIronMan;
+ (BOOL)enableBarPlatformRefactor;
+ (BOOL)shouldIgnoreFontRelatedChange;
@end
