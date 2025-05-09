@interface NSCFOutputStream : NSOutputStream
- (long long)write:maxLength:;
- (id)initToMemory;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:forMode:;
- (void)open;
- (BOOL)allowsWeakReference;
- (id)initToBuffer:capacity:;
- (void)setDelegate:;
- (BOOL)_setCFClientFlags:callback:context:;
- (id)streamError;
- (void)scheduleInRunLoop:forMode:;
- (id)initToFileAtPath:append:;
- (void)close;
- (unsigned long long)hash;
- (BOOL)setProperty:forKey:;
- (void)_unscheduleFromCFRunLoop:forMode:;
- (id)initWithURL:append:;
- (id)propertyForKey:;
- (id)release;
- (void)_scheduleInCFRunLoop:forMode:;
- (BOOL)retainWeakReference;
- (BOOL)hasSpaceAvailable;
- (id)retain;
- (id)delegate;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
+ (id)allocWithZone:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
