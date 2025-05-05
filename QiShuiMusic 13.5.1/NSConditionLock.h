@interface NSConditionLock : NSObject
@property (nonatomic) q condition;
@property (nonatomic) NSString name;
- (long long)condition;
- (BOOL)lockBeforeDate:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (BOOL)lockWhenCondition:beforeDate:;
- (id)initWithCondition:;
- (void)unlock;
- (void)unlockWithCondition:;
- (void)lock;
- (BOOL)tryLock;
- (void)lockWhenCondition:;
- (id)description;
- (BOOL)tryLockWhenCondition:;
- (id)name;
@end
