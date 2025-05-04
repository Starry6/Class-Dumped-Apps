@interface AWEAnnieXDeprecatedUtils : NSObject
+ (id)bdx_appendCommonParamsHostAllowList;
+ (id)bdx_searchBlock;
+ (id)bdx_saveWebImageBlock:;
+ (id)bdx_loadingViewBuilder;
+ (id)bdx_failedViewBuilder;
+ (id)bdx_navBarShareHandle;
+ (id)findBDXPage:;
+ (void)saveWebImage:webURL:;
+ (void)image:didFinishSavingWithError:contextInfo:;
@end
