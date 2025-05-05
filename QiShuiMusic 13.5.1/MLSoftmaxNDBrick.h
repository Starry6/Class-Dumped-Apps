@interface MLSoftmaxNDBrick : NSObject
@property (nonatomic) BOOL shapeInfoNeeded;
@property (nonatomic) NSNumber axis;
@property (nonatomic) NSArray inputRanks;
@property (nonatomic) NSArray outputRanks;
@property (nonatomic) NSArray inputShapes;
@property (nonatomic) NSArray outputShapes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithParameters:;
- (void).cxx_destruct;
- (id)axis;
- (id)setupForInputShapes:withParameters:;
- (void)computeOnCPUWithInputTensors:outputTensors:;
- (BOOL)hasGPUSupport;
- (BOOL)shapeInfoNeeded;
- (id)inputRanks;
- (id)outputRanks;
- (id)inputShapes;
- (id)outputShapes;
@end
