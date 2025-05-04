@interface AWEStandardDHomeBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView standardClassifyView;
@property (nonatomic) AWEStandardClassifyBarModel standardClassifyModel;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)getTrackerPrams;
- (void)trackStayDurationEvent;
- (void)trackBarShow;
- (void)trackBarClick;
- (id)standardClassifyView;
- (void)setStandardClassifyView:;
- (void)setStandardClassifyModel:;
- (void)setUpStandardClassifyView;
- (id)standardClassifyModel;
- (id)standardClassifyModelFor:;
- (void)viewDidLoad;
- (id)identifier;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (void)tapped;
@end
