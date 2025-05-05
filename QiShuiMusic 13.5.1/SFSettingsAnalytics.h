@interface SFSettingsAnalytics : NSObject
+ (void)trackingSettingsSearchUsed:isUser65AgeOrOlder:searchFromSpotlight:searchActivityID:;
+ (void)trackingRecordAppActivityVisited;
+ (void)trackingAppActivitySaved;
+ (void)trackingSettingsSearchUsed:isUser65AgeOrOlder:numberOfSectionsInResults:numberOfTotalResults:searchFromSpotlight:methodForEndingSearch:searchResultURL:searchActivityID:;
+ (void)trackingSettingsOpenByURL:url:;
+ (void)trackingViewVisited;
+ (void)trackingAppAccessTransparencyVisited:;
+ (void)trackingControlValueChanged:sender:;
+ (void)trackingPerformSelector:targetString:;
+ (void)trackingSettingsSearchUsed:numberOfSectionsInResults:numberOfTotalResults:searchFromSpotlight:methodForEndingSearch:searchActivityID:;
+ (void)trackingSettingsSearchUsed:searchFromSpotlight:methodForEndingSearch:searchResultURL:;
+ (void)trackingStateOfRequestForSpecificApp:view:;
+ (void)trackingViewControllersVisitedInRootController:;
+ (void)trackingStateOfRequest:askAppsToStopTracking:;
@end
