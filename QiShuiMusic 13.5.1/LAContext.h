@interface LAContext : NSObject
@property (nonatomic) NSData externalizedContext;
@property (nonatomic) NSData evaluatedPolicyDomainState;
@property (nonatomic) q biometryType;
@property (nonatomic) NSNumber touchIDAuthenticationRetryLimit;
@property (nonatomic) <LAUIDelegate> uiDelegate;
@property (nonatomic) I instanceId;
@property (nonatomic) NSString localizedFallbackTitle;
@property (nonatomic) NSNumber maxBiometryFailures;
@property (nonatomic) NSString localizedCancelTitle;
@property (nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property (nonatomic) NSString localizedReason;
@property (nonatomic) BOOL interactionNotAllowed;
- (id)optionPINCharset;
- (void)addContextObserver:;
- (id)init;
- (id)optionNotInteractive;
- (id)evaluatePolicy:options:error:;
- (id)optionTimeout;
- (void)dealloc;
- (id)uiDelegate;
- (id)optionFallbackVisible;
- (id)optionSoftwareUpdateManifest;
- (void)setOptionFingerMustBeOff:;
- (id)optionFaceDetectLength;
- (BOOL)isCredentialSet:;
- (void)setOptionTransitionStyle:;
- (id)optionSharedValidity;
- (id)uuid;
- (void)setOptionReturnBiometryDatabaseHash:;
- (void)setEvaluatedPolicyDomainState:;
- (void)setOptionSkipDoublePress:;
- (void)setTouchIDAuthenticationAllowableReuseDuration:;
- (id)optionEventProcessing;
- (void)removeContextObserver:;
- (void)setUiDelegate:;
- (void)_evaluatePolicy:options:synchronous:reply:;
- (BOOL)_setCredential:type:log:cid:error:;
- (void)setOptionPasscodeScreenStyle:;
- (id)initWithExternalizedContext:;
- (BOOL)interactionNotAllowed;
- (void)setOptionFaceDetectLength:;
- (id)externalizedContext;
- (void)_evaluateAccessControl:operation:options:log:cid:synchronous:reply:;
- (void)setOptionSharedValidity:;
- (id)optionReturnBiometryDatabaseHash;
- (void)setOptionMatchForUnlock:;
- (id)optionSoftwareUpdateStashMode;
- (id)optionNoFailureUI;
- (id)optionCallerPID;
- (void)setOptionPINCharset:;
- (void)setOptions:forInternalOperation:reply:;
- (id)optionPINFirst;
- (void)_evaluatePolicy:options:log:cid:synchronous:reply:;
- (id)localizedCancelTitle;
- (BOOL)setCredential:type:error:;
- (void)setCredential:type:reply:;
- (id)evaluationMechanismsForPolicy:error:;
- (void)setOptionSoftwareUpdateStashMode:;
- (void)setOptionTimeout:;
- (id)initWithCoder:;
- (void)failProcessedEvent:failureError:reply:;
- (id)optionTransitionStyle;
- (void)setOptionPresentingEmbeddedUI:;
- (void)prearmTouchIDWithReply:;
- (unsigned long long)hash;
- (void)setLocalizedReason:;
- (id)optionPresentationContext;
- (id)evaluatedPolicyDomainState;
- (id)optionPhysicalButtonTitle;
- (id)optionTintColor;
- (void)setOptionUserFallback:;
- (id)optionCancelVisible;
- (id)localizedReason;
- (void)setLocalizedFallbackTitle:;
- (id)optionAuthenticationTitle;
- (id)optionPasscodeScreenStyle;
- (void)setOptionSoftwareUpdateManifest:;
- (id)optionCallerName;
- (void)setLocalizedCancelTitle:;
- (void)setInteractionNotAllowed:;
- (id)optionCallerIconBundlePath;
- (void)setOptionNotInteractive:;
- (id)evaluateAccessControl:operation:options:error:;
- (void)setOptionPasswordAuthenticationReason:;
- (void)setOptionPINLength:;
- (id)_publicErrorFromInternalError:options:;
- (id)optionMaxBiometryFailures;
- (void)setOptionCheckApplePayEnabled:;
- (long long)biometryType;
- (void)authorizeOperation:protectedBy:options:reply:;
- (id)maxBiometryFailures;
- (void)setOptionNoFailureUI:;
- (void)setOptionUseModernUI:;
- (void)encodeWithCoder:;
- (id)evaluationMechanismsForAccessControl:operation:error:;
- (void)setOptionPINMaxLength:;
- (void)retryProcessedEvent:reply:;
- (id)optionPINLabel;
- (void)setCredential:forProcessedEvent:credentialType:reply:;
- (void)evaluateAccessControl:aksOperation:options:reply:;
- (void)setOptionPINFirst:;
- (id)_hashWithBundleIdentifier:;
- (void)_setServerPropertyForOption:value:log:;
- (void)setOptionPhysicalButtonTitle:;
- (void)setOptionBodyText:;
- (void)setOptionUserCancel:;
- (id)localizedFallbackTitle;
- (void)setOptionMaxBiometryFailures:;
- (void)setExternalizedContext:;
- (void)setOptionAuthenticationTitle:;
- (id)optionUserCancel;
- (void)setOptionTKAuthOperationError:;
- (void)checkCanEvaluateRight:reply:;
- (void)optionsForInternalOperation:reply:;
- (void)_setServerPropertyForOption:value:;
- (void)setShowingCoachingHint:event:reply:;
- (void)setOptionCancelVisible:;
- (void)evaluateRight:localizedReason:reply:;
- (void)setOptionCallerPID:;
- (id)optionBiometryLockoutRecovery;
- (void)resetProcessedEvent:reply:;
- (BOOL)setCredential:type:;
- (void).cxx_destruct;
- (void)setOptionPasscodeScreenBlur:;
- (void)_setCredential:type:log:cid:reply:;
- (id)optionTKAuthOperationError;
- (void)bootstrapServiceType:completionHandler:;
- (id)credentialOfType:error:;
- (id)optionPasswordAuthenticationReason;
- (void)setMaxBiometryFailures:;
- (id)optionPINMinLength;
- (void)setOptionPresentationStyle:;
- (id)initWithExternalizedContext:userSession:;
- (id)touchIDAuthenticationRetryLimit;
- (unsigned int)instanceId;
- (void)credentialOfType:reply:;
- (void)setOptionCallerName:;
- (void)setOptionPasscodeTitle:;
- (void)setOptionFallbackVisible:;
- (id)evaluateAccessControl:aksOperation:options:error:;
- (void)setOptionPINLabel:;
- (id)optionUseModernUI;
- (id)optionPresentationStyle;
- (id)description;
- (id)optionPINMaxLength;
- (void)evaluatePolicy:options:reply:;
- (void)setOptionPINTitle:;
- (double)touchIDAuthenticationAllowableReuseDuration;
- (void)setTouchIDAuthenticationRetryLimit:;
- (id)optionPINTitle;
- (void)setOptionCallerAuditToken:;
- (id)optionSecurePassphrase;
- (void)evaluateAccessControl:operation:options:reply:;
- (id)optionUserFallback;
- (void)_notifyObserversAfterInvalidation;
- (id)optionSkipDoublePress;
- (id)_serverPropertyValueForOption:log:;
- (void)setOptionEventProcessing:;
- (void)setOptionPresentationContext:;
- (void)resetWithReply:;
- (BOOL)canEvaluatePolicy:error:;
- (id)optionPresentingEmbeddedUI;
- (void)pauseProcessedEvent:pause:reply:;
- (id)optionBodyText;
- (id)optionCallerAuditToken;
- (BOOL)verifyFileVaultUser:volumeUuid:options:error:;
- (id)optionPINLength;
- (id)initWithUIDelegate:;
- (id)optionPasscodeScreenBlur;
- (void)setOptionTintColor:;
- (id)optionMatchForUnlock;
- (id)_serverPropertyValueForOption:;
- (id)optionCheckApplePayEnabled;
- (id)_evaluatePolicy:options:log:cid:error:;
- (id)initWithExternalizedContext:uiDelegate:;
- (id)optionFingerMustBeOff;
- (void)evaluateAccessControl:operation:localizedReason:reply:;
- (void)invalidate;
- (void)setOptionBiometryLockoutRecovery:;
- (void)setOptionCallerIconBundlePath:;
- (BOOL)isEqual:;
- (void)setOptionAuthenticationReason:;
- (void)evaluatePolicy:localizedReason:reply:;
- (id)_evaluationMechanismsFromReturnedError:error:;
- (id)optionPasscodeTitle;
- (void)authMethodWithReply:;
- (BOOL)checkContextValidWithError:;
- (BOOL)_useModernAuthorizationSheet;
- (void)setBiometryType:;
- (id)optionAuthenticationReason;
- (void)setOptionSecurePassphrase:;
- (void)setOptionPINMinLength:;
+ (unsigned int)newCommandId;
+ (void)notifyEvent:completionHandler:;
+ (BOOL)supportsSecureCoding;
+ (unsigned int)newInstanceId;
+ (void)notifyEvent:;
+ (id)_optionsForEvent:;
@end
