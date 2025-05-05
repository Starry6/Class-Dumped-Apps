@interface IMSimulatedAccountController : IMAccountController
- (id)init;
- (id)activeAccounts;
- (void).cxx_destruct;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (void)setSimulatedAccounts:forServiceNamed:;
@end
