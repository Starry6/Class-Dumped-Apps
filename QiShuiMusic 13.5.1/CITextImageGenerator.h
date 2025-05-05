@interface CITextImageGenerator : CIFilter
@property (nonatomic) NSString inputText;
@property (nonatomic) NSString inputFontName;
@property (nonatomic) NSNumber inputFontSize;
@property (nonatomic) NSNumber inputScaleFactor;
@property (nonatomic) NSNumber inputPadding;
- (id)outputImage;
- (void)setInputText:;
- (id)inputText;
- (id)inputScaleFactor;
- (void)setInputScaleFactor:;
- (id)inputFontName;
- (void)setInputFontName:;
- (id)inputFontSize;
- (void)setInputFontSize:;
- (id)inputPadding;
- (void)setInputPadding:;
+ (id)customAttributes;
@end
