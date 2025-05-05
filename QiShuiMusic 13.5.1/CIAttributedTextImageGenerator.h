@interface CIAttributedTextImageGenerator : CIFilter
@property (nonatomic) NSAttributedString inputText;
@property (nonatomic) NSNumber inputScaleFactor;
@property (nonatomic) NSNumber inputPadding;
- (id)outputImage;
- (void)setInputText:;
- (id)inputText;
- (id)inputScaleFactor;
- (void)setInputScaleFactor:;
- (id)inputPadding;
- (void)setInputPadding:;
+ (id)customAttributes;
@end
