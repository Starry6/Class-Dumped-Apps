@interface AWEPublishCoproduceAddUserTableViewCell : UITableViewCell
@property (nonatomic) UIButton addCoproduceButton;
@property (nonatomic) UILabel addTitleLabel;
@property (nonatomic) BOOL disableAndGrey;
- (id)addCoproduceButton;
- (id)addTitleLabel;
- (BOOL)disableAndGrey;
- (void)updateUIStateOperable:;
- (void)setDisableAndGrey:;
- (void)setAddCoproduceButton:;
- (void)setAddTitleLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
+ (double)cellHeight;
@end
