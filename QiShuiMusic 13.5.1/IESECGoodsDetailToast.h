@interface IESECGoodsDetailToast : UIView
@property (nonatomic) IESECLLDCImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) IESECToastElement element;
- (void)showWithToastElement:;
- (id)element;
- (id)textLabel;
- (void)layoutSubviews;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setElement:;
- (void)setTextLabel:;
+ (void)showWithToastElement:;
@end
