@interface MADResult : NSObject
@property (nonatomic) Q executionNanoseconds;
@property (nonatomic) double executionTimeInterval;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timerange;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)executionNanoseconds;
- (void)setExecutionNanoseconds:;
- (id)timerange;
- (double)executionTimeInterval;
+ (BOOL)supportsSecureCoding;
@end
