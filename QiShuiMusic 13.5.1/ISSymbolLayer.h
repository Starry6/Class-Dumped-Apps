@interface ISSymbolLayer : ISLayer
@property (nonatomic) IFColor color;
@property (nonatomic) <ISCompositorResource> symbol;
@property (nonatomic) double fontSize;
@property (nonatomic) Q symbolSize;
@property (nonatomic) q symbolWeight;
- (void)setSymbolSize:;
- (unsigned long long)symbolSize;
- (void)setSymbol:;
- (id)init;
- (void)setColor:;
- (id)symbol;
- (id)color;
- (void)setSymbolWeight:;
- (double)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
- (long long)symbolWeight;
@end
