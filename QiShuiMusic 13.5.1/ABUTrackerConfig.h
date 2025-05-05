@interface ABUTrackerConfig : NSObject
@property (nonatomic) Q condition;
@property (nonatomic) q batchSize;
@property (nonatomic) q batchMode;
@property (nonatomic) double batchInterval;
@property (nonatomic) q minUploadSize;
@property (nonatomic) q type;
@property (nonatomic) q validDays;
- (long long)batchMode;
- (long long)minUploadSize;
- (void)setBatchMode:;
- (void)setMinUploadSize:;
- (void)setValidDays:;
- (long long)validDays;
- (unsigned long long)condition;
- (id)init;
- (void)setCondition:;
- (long long)batchSize;
- (void)setBatchSize:;
- (void)setType:;
- (double)batchInterval;
- (long long)type;
- (void)setBatchInterval:;
+ (id)defaultConfig;
@end
