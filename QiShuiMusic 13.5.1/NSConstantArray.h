@interface NSConstantArray : NSArray
- (id)HMDP_objectAtIndex:;
- (id)HMDP_objectAtIndexedSubscript:;
- (id)init;
- (void)getObjects:range:;
- (void)dealloc;
- (id)copy;
- (id)objectAtIndexedSubscript:;
- (BOOL)_isDeallocating;
- (id)mutableCopy;
- (id)autorelease;
- (id)release;
- (id)retain;
- (BOOL)_tryRetain;
- (id)initWithObjects:count:;
- (id)objectAtIndex:;
- (id)objectEnumerator;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)new;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
