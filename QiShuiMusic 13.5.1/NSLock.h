@interface NSLock : NSObject
@property (nonatomic) NSString name;
- (void)mf_waitForLock;
- (BOOL)lockBeforeDate:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (id)description;
- (id)name;
@end
