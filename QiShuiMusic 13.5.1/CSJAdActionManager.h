@interface CSJAdActionManager : NSObject
- (id)_genLiveAdCustomActionModelWithMeta:context:;
- (BOOL)_handleProductInfoPageWithMeta:context:;
- (void)_trackLiveAdCustomActionResult:meta:context:;
- (id)_urlStringFromParameters:;
- (void)bu_handelCallActionWithModel:context:;
- (void)bu_handelCallActionWithModel:withIsWebPage:context:;
- (void)bu_handleAppActionWithModel:context:withDownloadActionType:withSucessCallBack:withFailedCallback:;
- (void)bu_handleSafariActionWithModel:context:;
- (void)bu_handleVideoAdActionWithModel:context:;
- (void)bu_handleWebPageActionWithModel:context:;
- (void)bu_openPolicy:context:;
- (void)bu_openUrlString:context:;
- (void)bu_preProccessWithModel:context:completion:;
- (void)bu_splashHandleWebPageActionWithModel:context:;
- (void)pbu_handleAppActionWithModel:context:withDownloadActionType:withSucessCallBack:withFailedCallback:;
- (void)pbu_handleVideoAdActionWithModel:context:;
- (void)pbu_handleWebPageActionWithModel:context:;
- (void)pbu_reportClickUrlWithData:;
- (BOOL)tryLiveAdCustomActionWithModel:context:;
+ (void)gotoDetailPage:context:;
+ (void)gotoDetailPage:context:isSplash:;
+ (void)gotoSplashDetailPage:context:;
+ (void)pbu_openPolicy:context:;
+ (void)pbu_preProccessWithModel:context:completion:;
+ (id)sharedManager;
@end
