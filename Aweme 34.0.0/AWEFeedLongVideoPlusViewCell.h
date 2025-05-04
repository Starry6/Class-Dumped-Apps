@interface AWEFeedLongVideoPlusViewCell : AWEFeedViewCell
@property (nonatomic) AWELongVideoPlusFeedCellViewController viewController;
- (void)didDisplay;
- (id)registerElementModel;
- (void)setRegisterElementModel:;
- (void)configWithModel:;
- (void)removeCellChildVCForMemoryOpt;
- (BOOL)shouldPreventVideoPause;
- (void)addChildVC;
- (void)removeChildVC;
- (void)play;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (id)viewController;
- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)setViewController:;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
- (id)parentVC;
- (void)setParentVC:;
@end
