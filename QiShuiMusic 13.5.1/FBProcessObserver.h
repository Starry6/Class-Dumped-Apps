@interface FBProcessObserver : NSObject
@property (nonatomic) <FBProcessObserver> observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)applicationProcessWillLaunch:;
- (void)applicationProcessDidLaunch:;
- (unsigned long long)hash;
- (void)applicationProcessDidExit:withContext:;
- (void)processDidExit:;
- (void)process:stateDidChangeFromState:toState:;
- (id)initWithObserver:;
- (void)processWillExit:;
- (void).cxx_destruct;
- (void)applicationProcessDebuggingStateDidChange:;
- (void)invalidate;
- (BOOL)isEqual:;
- (id)observer;
@end
