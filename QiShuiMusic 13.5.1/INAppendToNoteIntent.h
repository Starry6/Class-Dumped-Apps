@interface INAppendToNoteIntent : INIntent
@property (nonatomic) INNote targetNote;
@property (nonatomic) INNoteContent content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)content;
- (void)setContent:;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)targetNote;
- (void)setTargetNote:;
- (id)initWithTargetNote:content:;
@end
