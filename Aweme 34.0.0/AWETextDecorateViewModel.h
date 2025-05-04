@interface AWETextDecorateViewModel : AWEDecorateViewModel
@property (nonatomic) NSString content;
@property (nonatomic) double fontSize;
@property (nonatomic) NSString fontName;
@property (nonatomic) NSString fontColor;
- (void)setFontName:;
- (id)content;
- (double)fontSize;
- (id)fontName;
- (void)setFontSize:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)fontColor;
- (void)setFontColor:;
+ (id)JSONKeyPathsByPropertyKey;
@end
