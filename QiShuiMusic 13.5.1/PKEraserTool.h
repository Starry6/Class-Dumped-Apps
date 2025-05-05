@interface PKEraserTool : PKTool
@property (nonatomic) double _weight;
@property (nonatomic) q eraserType;
- (double)_weight;
- (id)initWithEraserType:;
- (long long)eraserType;
- (id)initWithEraserType:weight:;
@end
