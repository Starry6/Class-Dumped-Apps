@interface ISTextLayer : ISLayer
@property (nonatomic) IFColor color;
@property (nonatomic) NSString text;
@property (nonatomic) NSString fontName;
@property (nonatomic) double fontSize;
- (id)init;
- (void)setFontName:;
- (void)setColor:;
- (void)setText:;
- (id)color;
- (double)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
- (id)fontName;
- (id)text;
@end
