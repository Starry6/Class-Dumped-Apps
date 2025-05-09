@interface ASCAppearMetricsPresenter : NSObject
@property (nonatomic) ASCMetrics metrics;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL settingModel;
@property (nonatomic) ASCMetricsScrollObserver scrollObserver;
@property (nonatomic) BOOL canAppear;
@property (nonatomic) BOOL canDisappear;
@property (nonatomic) UIView view;
@property (nonatomic) ASCMetricsActivity activity;
@property (nonatomic) BOOL enabled;
@property (nonatomic) <ASCViewModel> model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)model;
- (id)initWithView:;
- (void)setModel:;
- (id)metrics;
- (void)setActivity:;
- (void)scrollViewDidScroll:;
- (id)view;
- (id)activity;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)scrollObserver;
- (id)description;
- (void)setScrollObserver:;
- (BOOL)isEnabled;
- (void)viewDidMoveToWindow;
- (void)setAppeared:;
- (id)initWithView:metrics:;
- (void)viewDidSetHidden;
- (void)viewDidAction;
- (void)viewDidEndRenderWithPredicate:;
- (void)viewDidFailRequest:withError:;
- (void)viewDidRetryFailedRequest;
- (BOOL)canAppear;
- (void)appearIfNeeded;
- (BOOL)canDisappear;
- (void)disappearIfNeeded;
- (BOOL)isAppeared;
- (BOOL)isSettingModel;
- (void)setSettingModel:;
+ (id)log;
@end
