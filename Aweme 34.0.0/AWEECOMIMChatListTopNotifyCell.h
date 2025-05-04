@interface AWEECOMIMChatListTopNotifyCell : UITableViewCell
@property (nonatomic) AWEECOMIMChatListTopNotifyView notifyView;
@property (nonatomic) @? cardWillDisplayBlock;
@property (nonatomic) @? cardClickBlock;
- (void)setupSubView;
- (void)setCardWillDisplayBlock:;
- (void)setCardClickBlock:;
- (void)configCellWithDataSource:;
- (void)setNotifyView:;
- (id)cardWillDisplayBlock;
- (id)notifyView;
- (id)cardClickBlock;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
+ (double)cellHeightWithDataSource:cellWidth:;
+ (id)identifier;
@end
