@interface MXHistogramBucket : NSObject
@property (nonatomic) NSMeasurement bucketStart;
@property (nonatomic) NSMeasurement bucketEnd;
@property (nonatomic) Q bucketCount;
- (unsigned long long)bucketCount;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithBucketStart:bucketEnd:bucketCount:;
- (id)bucketStart;
- (id)bucketEnd;
+ (BOOL)supportsSecureCoding;
@end
