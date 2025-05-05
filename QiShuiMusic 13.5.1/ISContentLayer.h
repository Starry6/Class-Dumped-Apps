@interface ISContentLayer : ISLayer
@property (nonatomic) IFColor backgroundColor;
@property (nonatomic) <ISCompositorResource> content;
@property (nonatomic) BOOL acceptSymbol;
- (id)content;
- (void)setContent:;
- (id)init;
- (void)setBackgroundColor:;
- (BOOL)acceptSymbol;
- (id)backgroundColor;
- (void).cxx_destruct;
- (void)setAcceptSymbol:;
@end
