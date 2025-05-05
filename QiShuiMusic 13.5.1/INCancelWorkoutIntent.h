@interface INCancelWorkoutIntent : INIntent
@property (nonatomic) INSpeakableString workoutName;
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
- (id)localizeValueOfSlotDescription:withLocalizer:;
- (id)workoutName;
- (void)setWorkoutName:;
- (id)initWithWorkoutName:;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
@end
