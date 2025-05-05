@interface PBSystemInputAssistantPasteButtonTag : PBPasteButtonTag
@property (nonatomic) q site;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (BOOL)isEqual:;
- (id)resolvedStyleForStyle:;
- (id)_acceptCalloutBarPasteButtonTagVisit:systemInputAssistantPasteButtonTagVisit:undoInteractionHUDIconPasteButtonTagVisit:undoInteractionHUDTextPasteButtonTagVisit:contextMenuPasteButtonTagVisit:editMenuPasteButtonTagVisit:;
- (unsigned long long)authenticationMessageContextForStyle:;
- (unsigned int)secureNameForStyle:;
- (id)initWithSite:;
- (long long)site;
+ (BOOL)supportsSecureCoding;
@end
