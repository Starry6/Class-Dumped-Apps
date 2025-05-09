@interface ISProtocolDataProvider : ISDataProvider
@property (nonatomic) BOOL shouldPostFooterSectionChanged;
@property (nonatomic) BOOL shouldProcessAccount;
@property (nonatomic) BOOL shouldProcessAuthenticationDialogs;
@property (nonatomic) BOOL shouldProcessDialogs;
@property (nonatomic) BOOL shouldProcessDialogsOutsideDaemon;
@property (nonatomic) BOOL shouldProcessProtocol;
@property (nonatomic) BOOL shouldProcessTouchIDDialogs;
@property (nonatomic) BOOL shouldTriggerDownloads;
@property (nonatomic) NSString presentingSceneIdentifier;
- (BOOL)shouldProcessAccount;
- (BOOL)shouldProcessAuthenticationDialogs;
- (id)init;
- (void)setShouldProcessAccount:;
- (BOOL)shouldProcessProtocol;
- (void)setShouldPostFooterSectionChanged:;
- (void)_performActionsForResponse:;
- (BOOL)shouldProcessDialogsOutsideDaemon;
- (id)_touchIDDialogForResponse:;
- (void)_presentDialog:;
- (BOOL)shouldPostFooterSectionChanged;
- (BOOL)_shouldFailWithTokenErrorForDialog:dictionary:error:;
- (void)setShouldProcessDialogsOutsideDaemon:;
- (BOOL)processDialogFromDictionary:error:;
- (BOOL)shouldTriggerDownloads;
- (void)setShouldProcessAuthenticationDialogs:;
- (id)presentingSceneIdentifier;
- (void)_checkDownloadQueues;
- (BOOL)processDictionary:error:;
- (BOOL)parseData:returningError:;
- (BOOL)_shouldAttemptPasswordPaymentSheetForError:;
- (void)_checkBiometricFailureForResponse:;
- (BOOL)shouldProcessTouchIDDialogs;
- (void)setPresentingSceneIdentifier:;
- (BOOL)shouldProcessDialogs;
- (id)_metricsDictionaryForResponse:;
- (void).cxx_destruct;
- (void)setShouldProcessProtocol:;
- (void)setShouldTriggerDownloads:;
- (BOOL)_processFailureTypeFromDictionary:error:;
- (void)_refreshSubscriptionStatus;
- (void)_selectFooterSection:;
- (void)_checkInAppPurchaseQueueForAction:;
- (void)setShouldProcessDialogs:;
- (id)copyWithZone:;
@end
