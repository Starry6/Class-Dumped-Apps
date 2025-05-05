@interface AMSThreadSafeObject : NSObject
@property (nonatomic) {os_unfair_lock_s=I} lock;
@property (nonatomic) @ underlyingObject;
- (void)setObject:;
- (id)init;
- (void)readWrite:;
- (id)initWithObject:;
- (id)lock;
- (void)setUnderlyingObject:;
- (void)read:;
- (void).cxx_destruct;
- (id)object;
- (id)underlyingObject;
- (id)accessAndSetObjectWithBlock:;
@end
