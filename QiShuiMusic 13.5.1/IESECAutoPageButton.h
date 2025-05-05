@interface IESECAutoPageButton : UIControl
@property (nonatomic) UIView contentView;
@property (nonatomic) IESECInnerScrollView pageScrollView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) {CGSize=dd} pageSize;
@property (nonatomic) UILabel currentLabel;
@property (nonatomic) UILabel forwardLabel;
@property (nonatomic) BOOL forwardState;
- (id)forwardLabel;
- (BOOL)forwardState;
- (void)setForwardLabel:;
- (void)setForwardState:;
- (void)startAutoPage;
- (id)contentView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setContentView:;
- (void)updateConstraints;
- (void)setImageView:;
- (id)pageScrollView;
- (void)setPageScrollView:;
- (id)pageSize;
- (void)setPageSize:;
- (id)currentLabel;
- (void)setCurrentLabel:;
@end
