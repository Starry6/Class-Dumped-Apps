@interface AWEPlayInteractionNewTrendGoodsBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView standardClassifyView;
@property (nonatomic) AWEStandardClassifyBarModel standardClassifyModel;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)getTrackerPrams;
- (void)trackBarShow;
- (void)trackBarClick;
- (id)standardClassifyView;
- (void)setStandardClassifyView:;
- (void)setStandardClassifyModel:;
- (BOOL)shouldShowStandardClassifyView:;
- (void)setUpStandardClassifyView;
- (id)standardClassifyModel;
- (id)standardClassifyModelFor:;
- (void)recordTapped;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
- (void)reset;
- (void)tapped;
@end
