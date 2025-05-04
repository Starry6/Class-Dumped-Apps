@interface AWEFeedHotSpotCellViewController : AWEAwemeDetailCellViewController
@property (nonatomic) <AWEAwemePlayInteractionPlayDelegate><AWEAwemePlayInteractionPanelDelegate><AWEAwemePlayInteractionCommerceDelegate><AWEAwemePlayInteractionUpdateDelegate><AWEAwemePlayInteractionUIDisplayDelegate><AWEFeedHotSpotInteractionViewControllerProtocol> hotInteractionController;
- (BOOL)isCommonFeedCellVC;
- (void)onlySendPlayEvent;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (BOOL)getCanShowBottomBarInListCell;
- (void)detailViewWillDisappear;
- (id)createInteractionController;
- (void)setHotInteractionController:;
- (id)hotInteractionController;
- (void)play;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)configureWithModel:;
@end
