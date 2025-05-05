@interface FigHUDGraphLayer : CALayer
- (void)drawInContext:;
- (id)init;
- (void)dealloc;
- (void)setUpGraphs:;
- (void)setUpGraph:min:max:numValues:;
- (void)updateValue:value:label:;
- (void)updateValue:value:;
@end
