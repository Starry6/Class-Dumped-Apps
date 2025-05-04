@interface AWEAnchorGameSearchHistoryCell : UITableViewCell
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UIImageView clockImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) @? deleteBlock;
- (void)configureUI;
- (void)setDeleteBlock:;
- (void)configureWithHistoryWord:;
- (id)clockImageView;
- (void)setClockImageView:;
- (void)setDeleteButton:;
- (void)setHighlighted:animated:;
- (id)indexPath;
- (void)setIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (id)deleteButton;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)deleteButtonTapped;
- (id)deleteBlock;
+ (id)cellIdentifier;
+ (double)cellHeight;
@end
