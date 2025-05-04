@interface AWEConcernFansToolAfterPostController : NSObject
@property (nonatomic) AWEConcernNoticeWindow window;
@property (nonatomic) BOOL canShowNoticeViewFlowCount;
@property (nonatomic) AWEConcernFansToolNoticeViewModel noticeViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__showWindowWithAwemeModel:;
- (BOOL)canShowNoticeViewFlowCount;
- (id)noticeViewModel;
- (void)setCanShowNoticeViewFlowCount:;
- (void)cancelAutoDismiss;
- (id)__trackEnterFrom;
- (void)didManualClose;
- (void)trackWithWindowShow:;
- (void)didNoticeHandled:;
- (void)showNoticeViewWithAwemeModel:;
- (void)setNoticeViewModel:;
- (void).cxx_destruct;
- (void)didDismiss;
- (id)window;
- (void)setWindow:;
@end
