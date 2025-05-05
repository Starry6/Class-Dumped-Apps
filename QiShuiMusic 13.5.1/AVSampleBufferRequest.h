@interface AVSampleBufferRequest : NSObject
@property (nonatomic) AVSampleCursor startCursor;
@property (nonatomic) q direction;
@property (nonatomic) AVSampleCursor limitCursor;
@property (nonatomic) q preferredMinSampleCount;
@property (nonatomic) q maxSampleCount;
@property (nonatomic) q mode;
@property (nonatomic) {?=qiIq} overrideTime;
- (long long)direction;
- (id)init;
- (void)setDirection:;
- (void)dealloc;
- (long long)mode;
- (void)setMode:;
- (long long)maxSampleCount;
- (id)startCursor;
- (id)limitCursor;
- (long long)preferredMinSampleCount;
- (id)overrideTime;
- (id)initWithStartCursor:;
- (void)setLimitCursor:;
- (void)setPreferredMinSampleCount:;
- (void)setMaxSampleCount:;
- (int)_figSampleGeneratorReadPolicy;
- (unsigned int)_figSampleGeneratorReadFlags;
- (void)setOverrideTime:;
+ (id)sampleBufferRequestWithStartCursor:;
@end
