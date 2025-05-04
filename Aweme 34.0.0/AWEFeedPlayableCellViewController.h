@interface AWEFeedPlayableCellViewController : AWEFeedCellViewController
@property (nonatomic) BOOL hasReset;
@property (nonatomic) NSObject<AWEAdPlayableController> playableController;
- (void)setPureMode:animated:;
- (BOOL)hasReset;
- (void)setHasReset:;
- (BOOL)canHandleGestureInCell:;
- (void)setPlayableController:;
- (id)playableController;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)setModel:;
- (void)play;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
