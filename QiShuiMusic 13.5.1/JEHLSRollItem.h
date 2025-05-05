@interface JEHLSRollItem : JEHLSItem
@property (nonatomic) Q duration;
- (void)setDuration:;
- (unsigned long long)duration;
- (id)initWithStartOverallPosition:duration:metricsData:;
- (unsigned long long)endOverallPosition;
- (BOOL)containsOverallPosition:;
@end
