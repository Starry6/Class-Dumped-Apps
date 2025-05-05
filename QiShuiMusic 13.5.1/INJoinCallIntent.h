@interface INJoinCallIntent : INIntent
@property (nonatomic) INCallGroupConversationFilter groupConversationFilter;
@property (nonatomic) INCallGroupConversation groupConversation;
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
- (id)groupConversation;
- (void)setGroupConversation:;
- (id)groupConversationFilter;
- (void)setGroupConversationFilter:;
- (id)initWithGroupConversationFilter:groupConversation:;
@end
