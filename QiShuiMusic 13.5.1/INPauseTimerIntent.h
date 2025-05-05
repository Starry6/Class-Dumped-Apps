@interface INPauseTimerIntent : INIntent
@property (nonatomic) INTimer targetTimer;
@property (nonatomic) NSNumber pauseMultiple;
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
- (id)targetTimer;
- (void)setTargetTimer:;
- (id)pauseMultiple;
- (void)setPauseMultiple:;
- (id)initWithTargetTimer:pauseMultiple:;
@end
