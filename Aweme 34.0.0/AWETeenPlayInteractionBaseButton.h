@interface AWETeenPlayInteractionBaseButton : AWETeenPlayInteractionBaseElement
@property (nonatomic) UIButton button;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? clickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClickBlock:;
- (id)clickBlock;
- (void)p_setupViews;
- (void)p_layoutHorizontal;
- (void)p_layoutVertical;
- (void)p_singleTap;
- (void)viewDidLoad;
- (void)setButton:;
- (void)setTitleLabel:;
- (void)setData:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)button;
- (id)imageView;
- (BOOL)isHorizontal;
@end
