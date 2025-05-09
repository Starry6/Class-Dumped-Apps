@interface INRunVoiceCommandIntent : INIntent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) INSpeakableString voiceCommand;
@property (nonatomic) INVoiceCommandDeviceInformation originDevice;
@property (nonatomic) INIntentExecutionResult executionResult;
@property (nonatomic) NSString previousIntentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (BOOL)_intents_enumerateObjectsOfClass:withBlock:;
- (id)executionResult;
- (void)setExecutionResult:;
- (id)originDevice;
- (void)setOriginDevice:;
- (id)previousIntentIdentifier;
- (void)setPreviousIntentIdentifier:;
- (id)voiceCommand;
- (void)setVoiceCommand:;
- (id)initWithVoiceCommand:originDevice:executionResult:previousIntentIdentifier:;
- (id)initWithVoiceCommand:originDevice:;
- (id)initWithVoiceCommand:originDevice:executionResult:;
@end
