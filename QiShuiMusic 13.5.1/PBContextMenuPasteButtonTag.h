@interface PBContextMenuPasteButtonTag : PBPasteButtonTag
@property (nonatomic) I secureName;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {CGPoint=dd} titleOrigin;
@property (nonatomic) q layoutSize;
@property (nonatomic) BOOL hasTrailingGutter;
- (long long)layoutSize;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (BOOL)isEqual:;
- (id)size;
- (id)resolvedStyleForStyle:;
- (unsigned int)secureName;
- (id)_acceptCalloutBarPasteButtonTagVisit:systemInputAssistantPasteButtonTagVisit:undoInteractionHUDIconPasteButtonTagVisit:undoInteractionHUDTextPasteButtonTagVisit:contextMenuPasteButtonTagVisit:editMenuPasteButtonTagVisit:;
- (unsigned long long)authenticationMessageContextForStyle:;
- (unsigned int)secureNameForStyle:;
- (id)titleOrigin;
- (id)initWithSecureName:size:titleOrigin:layoutSize:hasTrailingGutter:;
- (BOOL)hasTrailingGutter;
+ (BOOL)supportsSecureCoding;
@end
