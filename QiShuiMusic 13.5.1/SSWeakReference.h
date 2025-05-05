@interface SSWeakReference : NSObject
@property (nonatomic) @ object;
- (void)dealloc;
- (unsigned long long)hash;
- (id)object;
- (BOOL)isEqual:;
+ (id)weakReferenceWithObject:;
@end
