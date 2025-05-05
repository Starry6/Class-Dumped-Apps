@interface NSRecursiveLock : NSObject
@property (nonatomic) NSString name;
- (BOOL)lockBeforeDate:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (id)description;
- (id)name;
- (BOOL)isLocking;
+ (id)allocWithZone:;
@end
