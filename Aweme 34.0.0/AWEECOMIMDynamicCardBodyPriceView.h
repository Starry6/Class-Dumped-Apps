@interface AWEECOMIMDynamicCardBodyPriceView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UIView lineView;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (void)updatePriceViewWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)widthWithElementModel:;
+ (double)heightWihtElementModel:maxSize:;
+ (id)priceAttributedTextWithModel:;
+ (double)priceViewWidthWithModel:;
+ (double)getSmallFontSize:;
+ (id)textSizeWithWithModel:;
+ (id)priceTextWithModel:;
@end
