@interface AWEEcomSearchParticipleCell : UICollectionViewCell
@property (nonatomic) UIImageView participlLeft;
@property (nonatomic) UIImageView participlRight;
@property (nonatomic) UILabel participlTitle;
@property (nonatomic) UILabel bottomTitle;
@property (nonatomic) UIView longLineleft;
@property (nonatomic) UIView longLineRight;
- (void)configWithModel:;
- (id)participlTitle;
- (id)participlLeft;
- (id)participlRight;
- (id)longLineleft;
- (id)longLineRight;
- (void)setParticiplLeft:;
- (void)setParticiplRight:;
- (void)setParticiplTitle:;
- (void)setLongLineleft:;
- (void)setLongLineRight:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateUI;
- (void)setBottomTitle:;
- (id)bottomTitle;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
