@interface WBSPasswordBreachBloomFilter : NSObject
@property (nonatomic) NSData serializedRepresentation;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (void)addData:;
- (id)initWithCapacity:errorDenominator:bucketData:;
- (BOOL)_getBucketAtIndex:;
- (void)_setBucketAtIndex:inBuffer:;
- (void)_enumerateBucketIndexesForData:withBlock:;
- (BOOL)containsData:;
- (BOOL)containsLowercaseHexStringForData:;
@end
