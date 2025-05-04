@interface AWEHPLottieOfflineController : AWEBaseController
@property (nonatomic) AWEHPLottiePreDownloadManager preDownloadManager;
@property (nonatomic) AWEHPHambListener listener;
@property (nonatomic) {CGSize=dd} preferredContentSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preDownloadManager;
- (void)setPreDownloadManager:;
- (void)setListener:;
- (id)init;
- (void)dealloc;
- (id)listener;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)appDidEnterBackground;
@end
