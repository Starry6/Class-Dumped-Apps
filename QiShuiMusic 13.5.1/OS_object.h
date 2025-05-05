@interface OS_object : NSObject
- (id)init;
- (BOOL)allowsWeakReference;
- (void)_xref_dispose;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
@end
