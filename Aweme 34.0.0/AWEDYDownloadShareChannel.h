@interface AWEDYDownloadShareChannel : AWEDownloadShareChannel
@property (nonatomic) q shareCategory;
- (void)succeedWithDownloadResult:;
- (void)shareWithCompletion:;
- (long long)shareCategory;
- (BOOL)isShareItemEnabled;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)showDownloadSuccessToast;
- (void)showDownloadFailedToast;
- (void)setShareCategory:;
- (BOOL)shouldShowShareSavePanel;
- (BOOL)shouldForbidDownloadByVisibililyCheck:;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
@end
