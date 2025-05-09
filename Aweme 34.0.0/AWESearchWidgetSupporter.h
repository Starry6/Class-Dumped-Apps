@interface AWESearchWidgetSupporter : NSObject
@property (nonatomic) NSDictionary widgetInfo;
@property (nonatomic) NSDictionary widgetHotSpotConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:enterFrom:;
- (void)registerSearchWidgetIfNeeded;
- (void)preloadSearchWidgetGuideIfNeeded:;
- (BOOL)searchWidgetGuideABEnabled;
- (void)showSearchWidgetGuideIfNeeded;
- (void)canShowSearchWidgetGuide:;
- (void)reloadSearchWidgetDataIfNeeded;
- (BOOL)searchWidgetBasicStyleABEnabled;
- (long long)searchWidgetHotSpotShowCnt;
- (long long)searchWidgetHotSpotShowPos;
- (BOOL)searchWidgetWordsToGuess;
- (id)searchUserDefaultsKey;
- (id)getSearchUserDefault;
- (void)reloadSearchWidgetWithUserDefaults:;
- (void)setWidgetInfo:;
- (id)widgetHotSpotConfig;
- (void)setWidgetHotSpotConfig:;
- (id)init;
- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)sceneType;
- (id)widgetInfo;
+ (id)sharedInstance;
@end
