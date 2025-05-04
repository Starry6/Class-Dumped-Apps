@interface AWEPlayInteractionBaikeBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView baikeBottomView;
@property (nonatomic) AWEStandardClassifyBarModel baikeModel;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)getExtraParams;
- (BOOL)shouldAppearWithData:;
- (void)trackStayDurationEvent;
- (id)baikeBottomView;
- (void)setBaikeBottomView:;
- (void)setBaikeModel:;
- (BOOL)shouldShowBaikeBottomView:;
- (id)baikeModel;
- (void)trackBarShow;
- (id)baikeModelFor:;
- (void)trackBarClick;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)reset;
- (void)tapped;
@end
