@interface AWEVoiceSearchConfig : NSObject
- (id)init;
+ (BOOL)enablePenetrateHistoryWords;
+ (BOOL)enableSearchResultEntrance;
+ (long long)pressInterval;
+ (BOOL)enableEntranceLottieOpt;
+ (BOOL)enableEntranceOpt;
+ (long long)audioCacheDuration;
+ (BOOL)enablePreloadRecordResources;
+ (BOOL)keyboardNeedShow;
+ (BOOL)newGuideWords;
+ (unsigned long long)voiceSearchMiddlePagePanelStyle;
+ (long long)prefetchStrategy;
+ (id)sugAvailableScope;
+ (BOOL)finishedSignalOptEnable;
+ (id)searchResultEntrancePanelStyle;
+ (BOOL)enableMiddlePanelHotspotOpt;
+ (BOOL)enableIndependentRecordThread;
+ (BOOL)enable;
+ (id)config;
@end
