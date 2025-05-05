@interface PCSLockAssertion : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) PCSLockManager manager;
@property (nonatomic) BOOL held;
- (void)dealloc;
- (void)setName:;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)held;
- (void)dropAssertion;
- (id)initAssertion:manager:;
- (BOOL)holdAssertion;
- (void)setHeld:;
@end
