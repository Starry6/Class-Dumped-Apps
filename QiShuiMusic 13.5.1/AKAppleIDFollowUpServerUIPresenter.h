@interface AKAppleIDFollowUpServerUIPresenter : NSObject
@property (nonatomic) AKExtensionlessFollowUpHelperContext followupHelperContext;
@property (nonatomic) AKAppleIDAuthenticationInAppExtensionContext authContext;
- (id)init;
- (void)setAuthContext:;
- (id)authContext;
- (void).cxx_destruct;
- (void)presentServerUIWithContext:withCompletion:;
- (void)_prepareServerUIContext;
- (void)_signRequestAndPrepareServerConfig:;
- (void)_presentServerUIWithConfiguration:;
- (void)acknowledgeActionTakenOnFollowUpWithIdentifier:withAdditionalData:completion:;
- (void)signAdditionalHeadersWithRequest:;
- (BOOL)_shouldSignWithIDMSAppleIDHeader;
- (BOOL)shouldAcknowledgeUserAction;
- (id)_fetchCurrentFollowUpItem;
- (void)_signWithIDMSAppleIDHeaderForRequest:withCompletion:;
- (void)_performClientCompletionWithSuccess:error:;
- (void)_performAuthKitActionWithResponse:additionalData:error:;
- (void)handleFinalResponse:additionalData:error:;
- (id)followupHelperContext;
- (void)setFollowupHelperContext:;
@end
