@interface OS_xpc_uint64 : OS_xpc_object
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowsWeakReference;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
@end
