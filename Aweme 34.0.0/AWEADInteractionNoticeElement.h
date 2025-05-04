@interface AWEADInteractionNoticeElement : AWEPlayInteractionLeftElement
@property (nonatomic) UIView<AWEAdAutoRenewNoticeBarView> autoRenewNoticeBarView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)autoRenewNoticeBarView;
- (void)setAutoRenewNoticeBarView:;
- (void)updateAutoRenewNoticeBarView;
- (void)adNoticeTrack:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)noticeType;
+ (id)activateInfoWithContext:;
+ (BOOL)shouldAppearWithData:;
@end
