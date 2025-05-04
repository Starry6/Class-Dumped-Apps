@interface AWEBarFontModel : AWEBaseApiModel
@property (nonatomic) NSString fontName;
@property (nonatomic) NSNumber fontFamily;
@property (nonatomic) NSNumber fontSize;
@property (nonatomic) Q bold;
@property (nonatomic) NSString fontColor;
- (void)setFontName:;
- (id)fontSize;
- (id)fontName;
- (void)setFontSize:;
- (void).cxx_destruct;
- (id)fontColor;
- (unsigned long long)bold;
- (void)setBold:;
- (void)setFontColor:;
- (id)fontFamily;
- (void)setFontFamily:;
+ (id)JSONKeyPathsByPropertyKey;
@end
