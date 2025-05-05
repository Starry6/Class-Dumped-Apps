@interface MSVPersistentTimer : NSObject
@property (nonatomic) BOOL valid;
- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidateWithReason:;
- (id)initWithInterval:name:queue:block:;
- (void)_handleTimerElapsed:;
- (void)invalidate;
@end
