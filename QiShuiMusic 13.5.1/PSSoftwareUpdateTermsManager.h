@interface PSSoftwareUpdateTermsManager : NSObject
@property (nonatomic) RUIStyle serverFlowStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)remoteUIController:willPresentObjectModel:modally:;
- (void)remoteUIController:didFinishLoadWithError:;
- (void)remoteUIControllerDidDismiss:;
- (void)remoteUIController:didReceiveObjectModel:actionSignal:;
- (void)cancelLoadingTerms:;
- (void)_termsDisagree;
- (void)_acceptedTermsFromAsset;
- (void)_finishTermsWithAcceptance:error:;
- (void)_presentModalController:;
- (void)showLoadingSpinnerViewController;
- (void)presentTermsIfNecessaryForUpdate:overController:showLoadSpinner:completion:;
- (void)_loadTermsFromUpdateAsset;
- (id)versionFromLicenseText:;
- (void)_loadRemoteUITermsWithCloudAtURL:;
- (void)_loadTermsRemoteUIFailureWithError:;
- (void)_handleAgreeFromObjectModel:;
- (void)_acceptedTermsVersion:;
- (id)serverFlowStyle;
- (void)setServerFlowStyle:;
@end
