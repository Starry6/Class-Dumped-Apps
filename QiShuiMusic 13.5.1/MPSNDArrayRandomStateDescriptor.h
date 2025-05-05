@interface MPSNDArrayRandomStateDescriptor : NSObject
@property (nonatomic) I algorithm;
@property (nonatomic) ^I state;
@property (nonatomic) Q stateLength;
- (unsigned int)algorithm;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)state;
- (id)copyWithZone:;
- (id)initPhiloxStateDescriptorWithSeed:;
- (unsigned long long)stateLength;
- (id)initPhiloxStateDescriptorWithCounterLow:counterHigh:key:;
- (id)exportStateToNDArray:;
+ (BOOL)supportsSecureCoding;
@end
