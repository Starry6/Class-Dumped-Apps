@interface AWEPadInterestTagCell : UICollectionViewCell
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) BOOL hasInit;
- (void)drawWithTagModel:;
- (BOOL)hasInit;
- (void)setHasInit:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupView;
- (id)arrow;
- (void)setArrow:;
+ (double)widthCellForModel:;
@end
