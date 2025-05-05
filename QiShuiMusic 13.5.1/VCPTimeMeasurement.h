@interface VCPTimeMeasurement : NSObject
@property (nonatomic) double elapsedTimeSeconds;
@property (nonatomic) BOOL started;
- (id)init;
- (BOOL)started;
- (int)start;
- (double)elapsedTimeSeconds;
- (int)stop;
- (void)reset;
@end
