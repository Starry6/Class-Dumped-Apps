@interface AWEECOMIMDynamicCardPlaceHolderTextView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) AWEECOMIMDynamicCardCommonDiffBorderRadiusView bkgView;
@property (nonatomic) YYLabel richLabel;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (id)textSizeWithWithModel:;
- (id)richLabel;
- (id)displayAttributeStringWithModel:;
- (void)setRichLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
+ (id)sizeWithElementModel:maxSize:;
+ (BOOL)checkSupportSubElementViewWithElementModel:;
+ (double)heightWithElementModel:maxSize:;
+ (double)widthWithElementModel:maxSize:;
+ (id)textFontWithModel:;
+ (id)displayAttributeStringForCalculateWithModel:;
+ (id)textSizeWithWithModel:maxSize:;
@end
