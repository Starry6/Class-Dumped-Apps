@interface AWESearchAIGCDeepThinkItemView : UIView
@property (nonatomic) Q type;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) {CGSize=dd} viewSize;
- (void)updateWithIsSelected:title:icon:;
- (id)viewSize;
- (unsigned long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)createUI;
@end
