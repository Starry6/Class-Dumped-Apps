@interface AWERVLVAdBannerElement : AWERVVideoInfoBaseElement
@property (nonatomic) NSObject<AWEAdLongVideoBannerManager> preAdBannerManager;
@property (nonatomic) NSObject<AWEAdLongVideoBannerManager> currentAdBannerManager;
- (id)createAdBannerManager;
- (id)preAdBannerManager;
- (void)setPreAdBannerManager:;
- (void)setCurrentAdBannerManager:;
- (id)currentAdBannerManager;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)resetUI;
@end
