@interface PSWeakReference : NSObject
- (unsigned long long)hash;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)object;
- (id)forwardingTargetForSelector:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)weakReferenceWithObject:;
@end
