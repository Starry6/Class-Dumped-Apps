@interface AWESearchAwemeDetailDataController : AWEListDataController
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) NSString reactID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)detailTableViewControllerWillScrollToPreviousItem:currentAwemeModel:targetIndex:;
- (void)detailTableViewControllerWillScrollToNextItem:currentAwemeModel:targetIndex:;
- (void)detailTableViewControllerWillDisappear:currentAwemeModel:;
- (id)reactID;
- (void)setReactID:;
- (void)loadPreviousWithCompletion:;
- (id)initWithReactID:;
- (void)loadDataWithCompletion:loadPrevious:;
- (void)notifyItemStateChangedWithReacID:awemeModel:event:;
- (void)dealloc;
- (void)performBlock:;
- (id)observers;
- (void).cxx_destruct;
- (void)setObservers:;
@end
