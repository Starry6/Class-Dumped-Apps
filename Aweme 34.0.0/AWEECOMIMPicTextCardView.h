@interface AWEECOMIMPicTextCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMTextComponent textComponentView;
@property (nonatomic) UIView imageContainer;
@property (nonatomic) AWEECOMIMImageComponent imageComponentView;
- (id)imageComponentView;
- (void)setImageComponentView:;
- (id)popMenuItems:;
- (id)textComponentView;
- (void)setTextComponentView:;
- (id)imagePopMenuItems;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateData;
- (id)imageContainer;
- (void)setImageContainer:;
- (void)_customInit;
+ (double)heightWithWidth:model:;
@end
