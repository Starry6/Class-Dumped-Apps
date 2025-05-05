@interface SNAudioOffsetResult : NSObject
@property (nonatomic) double offset;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double confidence;
- (double)confidence;
- (id)timeRange;
- (void)setConfidence:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTimeRange:;
- (double)offset;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
