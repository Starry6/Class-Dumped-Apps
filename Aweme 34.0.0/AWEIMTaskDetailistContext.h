@interface AWEIMTaskDetailistContext : NSObject
@property (nonatomic) AWEIMWorkSpaceDetailResponse currentModel;
@property (nonatomic) AWEIMTaskDetailistFilterOptionModel filterModel;
@property (nonatomic) UIViewController filterController;
@property (nonatomic) NSArray currentSnapshot;
@property (nonatomic) UITableView tableView;
- (void)setFilterModel:;
- (id)filterModel;
- (id)currentSnapshot;
- (void)setTableView:;
- (id)tableView;
- (void).cxx_destruct;
- (void)setCurrentSnapshot:;
- (id)currentModel;
- (id)filterController;
- (void)setCurrentModel:;
- (void)setFilterController:;
@end
