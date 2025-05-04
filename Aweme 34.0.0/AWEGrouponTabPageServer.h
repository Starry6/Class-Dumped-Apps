@interface AWEGrouponTabPageServer : NSObject
+ (BOOL)hitSaaSFeedsWithPageContext:;
+ (id)requestParamsFromABTest;
+ (BOOL)hitSaaSFeedsWithPageType:;
+ (id)createTabPageWithPageContext:tabID:;
+ (id)sceneFromConfig;
@end
