@interface CJPayFullResultPageViewController : CJPayFullPageBaseViewController
@property (nonatomic) CJPayFullResultPageView resultPageView;
@property (nonatomic) CJPayResultPageModel model;
@property (nonatomic) NSDictionary trackerParams;
@property (nonatomic) BOOL isFirstDidAppear;
@property (nonatomic) @? closeCompletion;
- (void)p_close;
- (id)closeCompletion;
- (void)p_pageShowEvent;
- (id)initWithCJResultModel:trackerParams:;
- (BOOL)isFirstDidAppear;
- (void)p_closeActionAfterTime:;
- (void)p_setupUI;
- (void)p_updateTrackerParams;
- (id)resultPageView;
- (void)setIsFirstDidAppear:;
- (void)setResultPageView:;
- (void)setTrackerParams:;
- (id)trackerParams;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewDidLoad;
- (void)setCloseCompletion:;
@end
