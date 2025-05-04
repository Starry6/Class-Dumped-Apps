@interface AWELunaUgCollectionListPopView : AWELunaUgPopView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UITableView tableView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)p_lightColorNamed:;
- (BOOL)p_songCountIsExceed;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (id)initWithConfig:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)updateWithConfig:;
- (id)tableView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)titleLabel;
- (double)tableView:heightForHeaderInSection:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setUpUI;
@end
