@interface INSnoozeTasksIntent : INIntent
@property (nonatomic) NSArray tasks;
@property (nonatomic) INDateComponentsRange nextTriggerTime;
@property (nonatomic) NSNumber all;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)all;
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
- (id)tasks;
- (void)setTasks:;
- (id)nextTriggerTime;
- (void)setNextTriggerTime:;
- (void)setAll:;
- (id)initWithTasks:nextTriggerTime:all:;
@end
