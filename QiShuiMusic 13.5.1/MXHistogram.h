@interface MXHistogram : NSObject
@property (nonatomic) NSArray histogramData;
@property (nonatomic) Q totalBucketCount;
@property (nonatomic) NSEnumerator bucketEnumerator;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithHistogramBucketData:;
- (id)bucketEnumerator;
- (unsigned long long)totalBucketCount;
- (id)histogramData;
+ (BOOL)supportsSecureCoding;
@end
