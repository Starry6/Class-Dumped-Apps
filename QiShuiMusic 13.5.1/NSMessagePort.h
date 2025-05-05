@interface NSMessagePort : NSPort
- (id)init;
- (void)dealloc;
- (BOOL)setName:;
- (void)removeFromRunLoop:forMode:;
- (void)setDelegate:;
- (void)scheduleInRunLoop:forMode:;
- (BOOL)_isDeallocating;
- (id)initWithName:;
- (id)release;
- (id)retain;
- (id)delegate;
- (BOOL)_tryRetain;
- (BOOL)isValid;
- (id)name;
- (unsigned long long)retainCount;
- (void)invalidate;
- (BOOL)sendBeforeDate:components:from:reserved:;
- (BOOL)sendBeforeDate:msgid:components:from:reserved:;
- (BOOL)sendBeforeTime:streamData:components:from:msgid:;
- (id)initWithRemoteName:;
+ (BOOL)sendBeforeTime:streamData:components:to:from:msgid:reserved:;
+ (void)_fixNSMessagePortLeak;
@end
