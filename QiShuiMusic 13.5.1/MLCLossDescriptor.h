@interface MLCLossDescriptor : NSObject
@property (nonatomic) NSInteger lossType;
@property (nonatomic) NSInteger reductionType;
@property (nonatomic) float weight;
@property (nonatomic) float labelSmoothing;
@property (nonatomic) Q classCount;
@property (nonatomic) float epsilon;
@property (nonatomic) float delta;
- (float)delta;
- (float)weight;
- (unsigned long long)hash;
- (float)epsilon;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)lossType;
- (int)reductionType;
- (id)initWithLossDescriptorWithType:reductionType:weight:;
- (id)initWithLossDescriptorWithType:reductionType:weight:labelSmoothing:classCount:epsilon:delta:;
- (float)labelSmoothing;
- (unsigned long long)classCount;
+ (id)descriptorWithType:reductionType:;
+ (id)descriptorWithType:reductionType:weight:labelSmoothing:classCount:;
+ (id)descriptorWithType:reductionType:weight:;
+ (id)descriptorWithType:reductionType:weight:labelSmoothing:classCount:epsilon:delta:;
@end
