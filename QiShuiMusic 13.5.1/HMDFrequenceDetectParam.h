@interface HMDFrequenceDetectParam : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) double duration;
@property (nonatomic) Q maxCount;
@property (nonatomic) double reportInterval;
- (double)reportInterval;
- (void)setReportInterval:;
- (unsigned long long)maxCount;
- (BOOL)enabled;
- (void)setMaxCount:;
- (void)setDuration:;
- (void)setEnabled:;
- (double)duration;
- (id)copyWithZone:;
@end
