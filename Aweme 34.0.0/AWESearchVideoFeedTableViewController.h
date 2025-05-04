@interface AWESearchVideoFeedTableViewController : AWEAwemeDetailTableViewController
@property (nonatomic) AWEAwemeModel lastModel;
@property (nonatomic) AWEAwemeDetailTableViewCell currentDetailCell;
@property (nonatomic) q currentCellIndex;
@property (nonatomic) BOOL currentShouldShowMask;
- (void)onScrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)setCurrentCellIndex:;
- (id)lastModel;
- (void)shakeOnChangeCollection;
- (id)currentDetailCell;
- (void)setCurrentShouldShowMask:;
- (void)setCurrentDetailCell:;
- (void)setLastModel:;
- (BOOL)currentShouldShowMask;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)addObservers;
- (long long)currentCellIndex;
@end
