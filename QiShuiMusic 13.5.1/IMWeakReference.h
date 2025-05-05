@interface IMWeakReference : NSObject
- (unsigned long long)hash;
- (id)copyObject;
- (void).cxx_destruct;
- (id)object;
- (BOOL)isEqual:;
- (id)initRefWithObject:;
+ (id)weakRefWithObject:;
@end
