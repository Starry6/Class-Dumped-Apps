@interface VCHistogram : NSObject
@property (nonatomic) r^I ranges;
@property (nonatomic) I bucketCount;
- (unsigned int)bucketCount;
- (void)dealloc;
- (id)ranges;
- (id)array;
- (BOOL)merge:;
- (void)addValue:;
- (void)reset;
- (id)description;
- (id)initWithType:bucketValues:;
- (BOOL)addOnlyExactMatchingValue:;
- (BOOL)addOnlyExactMatchingValue:increment:;
- (void)addValue:withIncrement:;
- (unsigned int)bucketValueAtIndex:;
+ (id)bucketWithType:count:;
+ (id)rangesDescription:;
@end
