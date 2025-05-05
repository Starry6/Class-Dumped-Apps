@interface IESECCommentStatCell : UICollectionViewCell
@property (nonatomic) IESECHighlightButton statButton;
@property (nonatomic) @? clickLStatBlock;
- (void)filterComments:;
- (id)clickLStatBlock;
- (void)configWithStat:;
- (void)setClickLStatBlock:;
- (void)setStatButton:;
- (id)statButton;
- (void)setSelected:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
