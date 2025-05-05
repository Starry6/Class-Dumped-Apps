@interface VMUBacktrace : NSObject
@property (nonatomic) Q timestamp;
- (unsigned int)thread;
- (void)setThreadState:;
- (unsigned int)asyncBacktraceLength;
- (void)fixupStackWithSamplingContext:symbolicator:;
- (id)backtrace;
- (void)dealloc;
- (unsigned int)backtraceLength;
- (id)_symbolicator;
- (id)initWithCoder:;
- (int)threadState;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (unsigned long long)dispatchQueueSerialNumber;
- (id)asyncBacktrace;
- (unsigned long long)timestamp;
- (id)description;
- (id)stackFramePointers;
- (id)initWithSamplingContext:thread:recordFramePointers:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
