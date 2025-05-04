@interface AWETeenSearchHistoryCell : UICollectionViewCell
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) NSString keyword;
@property (nonatomic) @? deleteBlock;
@property (nonatomic) @? tapBlock;
@property (nonatomic) NSIndexPath indexPath;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)setDeleteBlock:;
- (void)deleteButtonOnClicked:;
- (void)setDeleteButton:;
- (id)indexPath;
- (id)initWithFrame:;
- (void)setIndexPath:;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)keyword;
- (void)setKeyword:;
- (id)deleteBlock;
+ (id)cellIdentifier;
+ (double)cellHeight;
@end
