@interface EAInputStream : NSInputStream
@property (nonatomic) NSInteger zeroBytesReadCount;
- (unsigned long long)streamStatus;
- (void)dealloc;
- (BOOL)hasBytesAvailable;
- (void)removeFromRunLoop:forMode:;
- (void)open;
- (void)setDelegate:;
- (id)streamError;
- (void)scheduleInRunLoop:forMode:;
- (void)close;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (id)delegate;
- (void)_accessoryDidDisconnect:;
- (BOOL)getBuffer:length:;
- (long long)read:maxLength:;
- (id)initWithAccessory:forSession:socket:;
- (id)initWithAccessoryWithoutSocket:forSession:;
- (void)openCompleted;
- (void)endStream;
- (void)_performAtEndOfStreamValidation;
- (void)_streamEventTrigger;
- (void)_scheduleCallback;
- (void)processIncomingAccessoryData:;
- (int)zeroBytesReadCount;
- (void)setZeroBytesReadCount:;
@end
