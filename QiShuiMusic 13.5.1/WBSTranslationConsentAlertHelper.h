@interface WBSTranslationConsentAlertHelper : NSObject
@property (nonatomic) <WBSTranslationConsentAlertHelperDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentationControllerDidDismiss:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)consentAlertForType:withCompletionHandler:;
- (void)_enableTranslation:;
- (void)_notNow:;
- (void)_callCompletionHandlerIfNeededWithConsent:;
@end
