@interface MLGeluActivationBrick : NSObject
@property (nonatomic) Q size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithParameters:;
- (unsigned long long)size;
- (id)setupForInputShapes:withParameters:;
- (void)computeOnCPUWithInputTensors:outputTensors:;
- (BOOL)hasGPUSupport;
@end
