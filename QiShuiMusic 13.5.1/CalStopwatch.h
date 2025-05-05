@interface CalStopwatch : NSObject
@property (nonatomic) BOOL usesSignalFlags;
- (id)init;
- (void)start;
- (void)stop;
- (unsigned long long)elapsedTimeAsNumber:;
- (void)markEventStart:;
- (BOOL)usesSignalFlags;
- (double)markEventSplit:;
- (unsigned long long)elapsedTimeInNanoseconds;
- (id)elapsedTimeAsString:;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)setUsesSignalFlags:;
- (double)markEventEnd:;
@end
