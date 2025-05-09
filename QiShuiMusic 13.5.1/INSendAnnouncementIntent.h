@interface INSendAnnouncementIntent : INIntent
@property (nonatomic) INAnnouncement announcement;
@property (nonatomic) NSArray recipients;
@property (nonatomic) NSNumber isReply;
@property (nonatomic) NSString sharedUserID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)isReply;
- (id)recipients;
- (id)_dictionaryRepresentation;
- (id)sharedUserID;
- (void)setRecipients:;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (void)setIsReply:;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (long long)_preferredInteractionDirection;
- (void)setSharedUserID:;
- (id)announcement;
- (void)setAnnouncement:;
- (id)initWithAnnouncement:recipients:isReply:sharedUserID:;
@end
