@interface PBEditMenuPasteButtonTag : PBPasteButtonTag
@property (nonatomic) I secureName;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {CGPoint=dd} contentOrigin;
@property (nonatomic) Q displayMode;
- (unsigned long long)displayMode;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (id)contentOrigin;
- (BOOL)isEqual:;
- (id)size;
- (id)resolvedStyleForStyle:;
- (unsigned int)secureName;
- (id)_acceptCalloutBarPasteButtonTagVisit:systemInputAssistantPasteButtonTagVisit:undoInteractionHUDIconPasteButtonTagVisit:undoInteractionHUDTextPasteButtonTagVisit:contextMenuPasteButtonTagVisit:editMenuPasteButtonTagVisit:;
- (unsigned long long)authenticationMessageContextForStyle:;
- (unsigned int)secureNameForStyle:;
- (id)initWithSecureName:size:contentOrigin:displayMode:;
+ (BOOL)supportsSecureCoding;
@end
