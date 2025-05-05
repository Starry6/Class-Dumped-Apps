@interface CUIPSDGradient : NSObject
@property (nonatomic) CUIPSDGradientEvaluator evaluator;
@property (nonatomic) double drawingAngle;
@property (nonatomic) I gradientStyle;
- (id)evaluator;
- (void)dealloc;
- (void)setEvaluator:;
- (id)initWithEvaluator:drawingAngle:gradientStyle:;
- (double)drawingAngle;
- (void)setDrawingAngle:;
- (unsigned int)gradientStyle;
- (void)setGradientStyle:;
+ (id)getMidpointLocationFromArray:atIndex:withPolicy:;
+ (id)cuiPSDGradientWithColors:locations:midpointLocations:angle:isRadial:;
+ (id)cuiPSDGradientWithColors:locations:midpointLocations:angle:style:;
@end
