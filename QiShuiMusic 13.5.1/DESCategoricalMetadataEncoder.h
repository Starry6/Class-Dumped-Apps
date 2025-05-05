@interface DESCategoricalMetadataEncoder : NSObject
@property (nonatomic) BOOL useRange;
- (void).cxx_destruct;
- (id)encodeString:toLength:;
- (id)encodeNumber:toLength:;
- (id)encodeStringVector:toLength:;
- (id)encodeNumberVector:toLength:;
- (id)zeroWithLength:;
- (id)initWithSingleSchema:;
- (unsigned long long)findBucketIndexOfString:inItems:;
- (unsigned long long)findBucketIndexOfNumber:inItems:;
- (BOOL)useRange;
@end
