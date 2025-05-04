@interface AWEShareAwemeDownloadStage : AWEShareBaseStage
@property (nonatomic) AWEMediaDownloadOptions downloadOptions;
@property (nonatomic) AWEMediaDownloadResultItem downloadResult;
- (void)setDownloadResult:;
- (void)trackDownloadEvent;
- (void)showDownloadFailedToast;
- (id)downloadResult;
- (BOOL)checkShouldRun;
- (void)startDownloading;
- (void)finishWithDownloadResult:;
- (void)updateModelAfterDownload;
- (BOOL)prepareBeforeRun;
- (void)run;
- (id)downloadOptions;
- (void).cxx_destruct;
- (BOOL)shouldRun;
- (void)setDownloadOptions:;
@end
