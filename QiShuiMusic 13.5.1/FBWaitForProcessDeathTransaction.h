@interface FBWaitForProcessDeathTransaction : FBTransaction
@property (nonatomic) FBProcess process;
@property (nonatomic) double timeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)processManager:didAddProcess:;
- (void)_didComplete;
- (id)_customizedDescriptionProperties;
- (void)processManager:didRemoveProcess:;
- (void)_begin;
- (BOOL)_canBeInterrupted;
- (id)process;
- (void).cxx_destruct;
- (id)initWithProcess:timeout:;
- (id)initWithProcess:;
- (double)timeout;
@end
