@interface AWEAwemeImmersiveHintImmersiveDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) UIView hintContainer;
@property (nonatomic) BOOL isNeedRecordUserDragImmersiveDetail;
@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL immersiveShowing;
- (void)onScrollViewWillBeginDragging:;
- (void)onScrollDidEndWithIndexPath:;
- (void)initialFetchCompletion:error:;
- (void)configCell:atIndexPath:tableView:;
- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:;
- (void)immersiveAutoShowIfNeed;
- (void)immersiveAutoHide;
- (void)immersiveHintCancel;
- (BOOL)immersiveShowing;
- (BOOL)isNeedRecordUserDragImmersiveDetail;
- (void)setIsNeedRecordUserDragImmersiveDetail:;
- (void)changeCellWithImmersiveStyle:visibleCells:;
- (void)immersiveUserDrag;
- (void)setImmersiveShowing:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (id)hintContainer;
- (void)setHintContainer:;
@end
