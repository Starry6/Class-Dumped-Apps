@interface AWEECOMIMDynamicCardRichTextParagraphView : AWEECOMIMDynamicCardBaseElementView
@property (nonatomic) UIView bkgView;
@property (nonatomic) YYLabel richLabel;
- (id)bkgView;
- (void)setBkgView:;
- (void)updateWithElememtModel:;
- (double)widthWithElementModel:;
- (double)heightWithElementModel:;
- (id)richLabel;
- (void)setRichLabel:;
- (void)updateRichLabelWithElememtModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)sizeWithElementModel:maxSize:;
+ (double)heightWithElementModel:maxSize:;
+ (double)widthWithElementModel:maxSize:;
+ (id)generateParagraphPaddingWithModel:;
+ (double)modifiedMaxLineHeightWithElementModelArr:;
+ (id)textSizeWithElementModel:modifiedLineHeight:textWidth:;
+ (id)displayAttributeStringWithElementModelArr:;
+ (long long)textLayoutMaxLineWithElementModel:;
+ (id)textFontWithFontSizeType:elementType:;
+ (double)modifiedLineHeightForTextFont:;
+ (id)displayAttributeStringForModel:;
+ (id)displayRichStringWithModel:;
+ (id)textColorWithTextType:;
+ (double)textBottomPadding;
+ (double)textTopPadding;
@end
