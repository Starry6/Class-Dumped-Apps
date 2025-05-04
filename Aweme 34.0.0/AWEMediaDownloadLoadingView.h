@interface AWEMediaDownloadLoadingView : AWEProgressLoadingView
@property (nonatomic) AWEMediaDownloadConfig config;
@property (nonatomic) NSTimer downloadTimer;
@property (nonatomic) double intervalToShowCancel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIntervalToShowCancel:;
- (id)downloadTimer;
- (void)setDownloadTimer:;
- (double)intervalToShowCancel;
- (void)p_setLoadingViewCancelableAnimated:withTitle:needsToast:;
- (void)setConfig:;
- (void)show;
- (void)endTimer;
- (id)config;
- (void)startDownloadTimer;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showCancelButton;
- (id)initWithType:title:;
- (BOOL)shouldStartTimer;
+ (id)loadingViewWithConfig:;
@end
