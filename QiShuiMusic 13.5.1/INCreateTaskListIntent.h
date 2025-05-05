@interface INCreateTaskListIntent : INIntent
@property (nonatomic) INSpeakableString title;
@property (nonatomic) NSArray taskTitles;
@property (nonatomic) INSpeakableString groupName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)setGroupName:;
- (void)setTitle:;
- (id)title;
- (void)_setMetadata:;
- (id)groupName;
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
- (id)taskTitles;
- (void)setTaskTitles:;
- (id)initWithTitle:taskTitles:groupName:;
@end
