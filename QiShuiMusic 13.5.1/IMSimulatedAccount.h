@interface IMSimulatedAccount : IMAccount
@property (nonatomic) IMHandle loginHandle;
- (BOOL)supportsRegistration;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)isOperational;
- (id)loginIMHandle;
- (void)setLoginHandle:;
- (id)loginHandle;
@end
