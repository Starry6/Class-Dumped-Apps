@interface NSCFError : NSError
- (id)userInfo;
- (BOOL)allowsWeakReference;
- (long long)code;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (Class)classForCoder;
- (id)domain;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
