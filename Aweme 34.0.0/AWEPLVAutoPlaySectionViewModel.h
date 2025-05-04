@interface AWEPLVAutoPlaySectionViewModel : AWEPLVConstantSectionViewModel
@property (nonatomic) AWEBaseDataController<AWEVideoHallFeedDataControllerProtocol> dataController;
@property (nonatomic) AWEPadListReusableViewBaseController<AWEPLVFocusedCellControllerProtocol> forceFocusedCell;
@property (nonatomic) AWEPadListReusableViewBaseController<AWEPLVFocusedCellControllerProtocol> currentFocusedCell;
- (void)setDataController:;
- (void)initFetch;
- (void)loadMoreWithParams:completion:;
- (id)currentFocusedCell;
- (void)setForceFocusedCell:;
- (void)setCurrentFocusedCell:;
- (id)forceFocusedCell;
- (void).cxx_destruct;
- (id)dataController;
+ (id)viewModelWithModelsArray:;
@end
