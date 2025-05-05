@interface CSJRewardFullLinkDetailPageWebViewControllerVM : CSJWebViewControllerViewModel
@property (nonatomic) BUTimer timer;
- (id)getMaterialMeta;
- (id)initWithRequestURL:adinfo:adSlot:size:isNavBarHidden:;
- (id)initWithRequestURL:adinfo:adSlot:size:isNavBarHidden:landingPageType:isFromClick:;
- (void)updateRewardTime;
- (void)invalidateTimer;
- (void)dealloc;
- (void)startTimer;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)handleViewDidLoad;
@end
