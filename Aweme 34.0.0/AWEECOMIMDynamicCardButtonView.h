@interface AWEECOMIMDynamicCardButtonView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIButton innerButton;
- (void)updateWithElememtModel:;
- (id)innerButton;
- (void)setInnerButton:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (BOOL)canElementTap;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void)onButtonClick:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)widthWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (BOOL)buttonShouldShow:;
@end
