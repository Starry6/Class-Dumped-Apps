@interface AKCustodianController : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:;
- (void)initiateCustodianSetupWithContext:completion:;
- (void)finalizeCustodianSetupWithContext:completion:;
- (void)revokeCustodianWithContext:completion:;
- (void)updateCustodianRecoveryKeyWithContext:completion:;
- (void)startCustodianRecoveryRequestWithContext:completion:;
- (void)fetchCustodianRecoveryCodeConfigurationWithCompletion:;
- (void)startCustodianRecoveryTransactionWithContext:completion:;
- (void)fetchCustodianRecoveryTokenWithContext:completion:;
- (void)fetchCustodianDataRecoveryKeyWithContext:completion:;
- (void)sendEmbargoEndNotificationFeedbackWithContext:urlKey:completion:;
- (void)performTrustedContactsDataSync:completion:;
@end
