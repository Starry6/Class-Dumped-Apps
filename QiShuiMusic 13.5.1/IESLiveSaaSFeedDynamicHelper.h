@interface IESLiveSaaSFeedDynamicHelper : NSObject
+ (BOOL)checkWithWithEnterFromMerge:enterMethod:enterSource:;
+ (id)feedDrawerConfigs;
+ (id)feedTypeStringWithType:;
+ (BOOL)isDrawEnabledWithEnterFromMerge:enterMethod:;
+ (id)liveFeedWithEnterFromMerge:enterMethod:feedType:;
+ (void)monitorFeedWithEnterFromMerge:enterMethod:feedType:reason:success:feedUrl:;
+ (BOOL)enable;
+ (id)defaultItem;
@end
