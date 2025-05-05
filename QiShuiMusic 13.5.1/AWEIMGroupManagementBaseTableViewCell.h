@interface AWEIMGroupManagementBaseTableViewCell : UITableViewCell
@property (nonatomic) AWEIMGroupManagementCellModel model;
@property (nonatomic) <AWEIMGroupManagementCellDelegate> delegate;
@property (nonatomic) @? refreshBlock;
- (void)configWithModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setRefreshBlock:;
- (id)refreshBlock;
+ (double)cellHeightWithModel:;
+ (id)identifier;
@end
