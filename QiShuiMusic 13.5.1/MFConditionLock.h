@interface MFConditionLock : NSConditionLock
- (id)initWithName:andDelegate:;
- (BOOL)lockBeforeDate:;
- (id)init;
- (void)dealloc;
- (BOOL)isLockedByMe;
- (BOOL)lockWhenCondition:beforeDate:;
- (void)unlock;
- (void)unlockWithCondition:;
- (id)description;
- (id)initWithName:condition:andDelegate:;
@end
