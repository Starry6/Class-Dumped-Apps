@interface SwiftNativeNSObject : NSObject
- (void)dealloc;
- (BOOL)allowsWeakReference;
- (BOOL)_isDeallocating;
- (id)initWithCoder:;
- (id)autorelease;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
+ (id)allocWithZone:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
