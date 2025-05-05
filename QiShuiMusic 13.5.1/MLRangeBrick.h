@interface MLRangeBrick : NSObject
@property (nonatomic) NSInteger size;
@property (nonatomic) float start;
@property (nonatomic) float stepSize;
@property (nonatomic) float startValueParameter;
@property (nonatomic) float endValueParameter;
@property (nonatomic) float stepSizeValueParameter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithParameters:;
- (float)start;
- (int)size;
- (float)stepSize;
- (id)setupForInputShapes:withParameters:;
- (void)computeOnCPUWithInputTensors:outputTensors:;
- (BOOL)hasGPUSupport;
- (BOOL)hasDynamicOutputShape:;
- (id)computeDynamicOutputShape:;
- (float)startValueParameter;
- (float)endValueParameter;
- (float)stepSizeValueParameter;
@end
