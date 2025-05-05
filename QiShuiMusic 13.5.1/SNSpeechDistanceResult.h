@interface SNSpeechDistanceResult : NSObject
@property (nonatomic) double currentFrameValue;
@property (nonatomic) double meanValue;
@property (nonatomic) double standardDeviation;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)timeRange;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (void)encodeWithCoder:;
- (void)setStandardDeviation:;
- (id)description;
- (double)standardDeviation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)meanValue;
- (double)currentFrameValue;
- (void)setCurrentFrameValue:;
- (void)setMeanValue:;
+ (BOOL)supportsSecureCoding;
@end
