@interface AWEWatchLaterRecommendHeaderCell : UICollectionReusableView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView textFakeView;
@property (nonatomic) UIView lineView;
@property (nonatomic) UIImageView closeView;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (id)closeView;
- (void)setCloseView:;
- (id)textFakeView;
- (void)setTextFakeView:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setTextLabel:;
- (void)setupUI;
- (void)updateText:;
@end
