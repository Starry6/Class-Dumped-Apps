@interface AWEIMChatTabTableView : UITableView
@property (nonatomic) double lastReloadInterval;
- (void)im_setDelegate:;
- (void)im_setDataSource:;
- (double)lastReloadInterval;
- (void)setLastReloadInterval:;
- (void)reloadData;
- (void)setContentInset:;
- (void)setDataSource:;
- (void)setDelegate:;
@end
