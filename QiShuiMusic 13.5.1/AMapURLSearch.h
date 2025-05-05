@interface AMapURLSearch : NSObject
+ (id)applicationScheme;
+ (BOOL)canOpenAMAPScheme;
+ (id)encodedStringWithValue:;
+ (void)getLatestAMapApp;
+ (BOOL)openAMapNavigation:;
+ (BOOL)openAMapPOISearch:;
+ (BOOL)openAMapRouteSearch:;
+ (id)applicationName;
@end
