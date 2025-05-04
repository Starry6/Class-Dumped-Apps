@interface AWESearchParamsProvidersUtil : NSObject
+ (id)enterFromWithContext:;
+ (id)buildSendBackDocsForRequest;
+ (id)parseSendBackInfo:;
+ (BOOL)enableDynamicTabRequestOptimize;
+ (id)generalSearchParamsProviders;
+ (id)afterFeedContinuePlayParamsProviders;
+ (id)generalRequestParamsContextWithTargetVC:extraLogParams:isRepeatPreRequest:generalContext:VCDidAppear:;
+ (id)requestAigcParamsContextWithDataController:extraParams:preRequestCustomParams:;
+ (id)AIGCSearchParamsProviders;
+ (BOOL)shouldStoreHistoryWithContext:;
+ (id)doubleColumnModeWithContext:searchSource:;
+ (BOOL)isFromECommerce:;
+ (void)handleSearchParamsProviderDiffers:enterFrom:searchSource:keyword:tag:isLoadMore:isPullRefresh:extraParams:;
+ (id)ignoreParamProviderDifferKeys;
+ (id)paramsProviderDiffExtraParams;
+ (BOOL)isPrefixEqual:stringB:;
+ (void)handleSearchParamsProviderDiffers:enterFrom:searchSource:keyword:tag:isLoadMore:isPullRefresh:;
@end
