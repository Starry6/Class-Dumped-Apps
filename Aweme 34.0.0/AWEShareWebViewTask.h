@interface AWEShareWebViewTask : AWEShareCommonTask
@property (nonatomic) BOOL needsUserInfo;
@property (nonatomic) BOOL shouldShowShare;
- (BOOL)shouldShowShare;
- (void)setNeedsUserInfo:;
- (void)setShouldShowShare:;
- (BOOL)needsUserInfo;
+ (void)parseTitleInWebView:completion:;
+ (void)prepareTaskWithWebView:model:completion:;
+ (void)finishPreparingTask:withModel:;
+ (void)prepareContextWithWebView:model:completion:;
+ (id)contextWithWebViewModel:;
+ (void)parseWebMetadataInWebView:completion:;
+ (id)webViewShareURLByRemovingUserInfoFromURL:;
+ (id)webViewShareURLByAddingUserInfoToURL:shareType:;
+ (id)statsShareWebViewStage;
+ (id)prepareShareWebViewModelStageNeedsUserInfo:;
@end
