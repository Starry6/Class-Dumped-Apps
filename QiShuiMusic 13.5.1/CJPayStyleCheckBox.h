@interface CJPayStyleCheckBox : CJPayButton
@property (nonatomic) UIColor cjStyleSelectedCheckBoxColor;
@property (nonatomic) NSString checkImgName;
@property (nonatomic) NSString noCheckImageName;
@property (nonatomic) UIColor selectedCheckBoxColor;
- (void)_UIAppearance_setSelectedCheckBoxColor:;
- (id)checkImgName;
- (id)cjStyleSelectedCheckBoxColor;
- (id)noCheckImageName;
- (void)p_applyDefaultAppearance;
- (void)p_updateStyle;
- (id)selectedCheckBoxColor;
- (void)setCheckImgName:;
- (void)setCjStyleSelectedCheckBoxColor:;
- (void)setNoCheckImageName:;
- (void)setSelectedCheckBoxColor:;
- (void)updateWithCheckImgName:noCheckImgName:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
