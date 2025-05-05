@interface INDeleteTasksIntent : INIntent
@property (nonatomic) INTaskList taskList;
@property (nonatomic) NSArray tasks;
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
- (void)setAll:;
- (id)taskList;
- (void)setTaskList:;
- (id)initWithTaskList:tasks:all:;
@end
