@interface ARRollingNumberSeries : NSObject
@property (nonatomic) Q windowSize;
@property (nonatomic) Q count;
@property (nonatomic) double sum;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double average;
@property (nonatomic) double variance;
- (unsigned long long)windowSize;
- (void)dealloc;
- (double)min;
- (id)initWithWindowSize:;
- (void)clear;
- (double)max;
- (unsigned long long)count;
- (double)average;
- (double)variance;
- (double)sum;
- (void)appendNumber:;
@end
