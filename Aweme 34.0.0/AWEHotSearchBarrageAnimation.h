@interface AWEHotSearchBarrageAnimation : NSObject
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEHotSearchBarrageView barrageViewDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)barrageViewDelegate;
- (void)onScrollDidScroll:velocityY:contentOffsetY:withType:;
- (void)onCellWillConfig:indexPath:withType:;
- (void)onCellWillDisplay:indexPath:withType:;
- (void)setBarrageViewDelegate:;
- (id)init;
- (void)setTableView:;
- (id)tableView;
- (void).cxx_destruct;
- (void)resetToInitialState;
@end
