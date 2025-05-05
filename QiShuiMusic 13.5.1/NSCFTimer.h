@interface NSCFTimer : NSTimer
- (double)tolerance;
- (id)init;
- (void)setTolerance:;
- (id)userInfo;
- (BOOL)allowsWeakReference;
- (void)setFireDate:;
- (unsigned long long)hash;
- (id)release;
- (BOOL)retainWeakReference;
- (id)initWithFireDate:interval:target:selector:userInfo:repeats:;
- (double)timeInterval;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (BOOL)isValid;
- (unsigned long long)retainCount;
- (id)fireDate;
- (void)invalidate;
- (BOOL)isEqual:;
- (void)fire;
+ (id)allocWithZone:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
