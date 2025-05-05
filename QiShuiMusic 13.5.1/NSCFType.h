@interface NSCFType : NSObject
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
