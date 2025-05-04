@interface AWEFeedProgressRefinedFrameSelectionItemCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView blackView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView leftSeparatorLine;
@property (nonatomic) UIView rightSeparatorLine;
- (id)descLabel;
- (void)setDescLabel:;
- (void)updateDescLabel:;
- (void)setupChapterUI;
- (void)configWithImage:desc:;
- (id)blackView;
- (void)setBlackView:;
- (id)rightSeparatorLine;
- (id)leftSeparatorLine;
- (void)setLeftSeparatorLine:;
- (void)setRightSeparatorLine:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
@end
