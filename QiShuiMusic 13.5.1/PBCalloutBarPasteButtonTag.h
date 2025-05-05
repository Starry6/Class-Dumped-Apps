@interface PBCalloutBarPasteButtonTag : PBPasteButtonTag
@property (nonatomic) I secureName;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {CGPoint=dd} titleOrigin;
@property (nonatomic) double titleWidth;
@property (nonatomic) Q contentScaleLevel;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (BOOL)isEqual:;
- (id)size;
- (id)resolvedStyleForStyle:;
- (unsigned int)secureName;
- (id)_acceptCalloutBarPasteButtonTagVisit:systemInputAssistantPasteButtonTagVisit:undoInteractionHUDIconPasteButtonTagVisit:undoInteractionHUDTextPasteButtonTagVisit:contextMenuPasteButtonTagVisit:editMenuPasteButtonTagVisit:;
- (id)initWithSecureName:size:titleOrigin:titleWidth:contentScaleLevel:;
- (unsigned long long)authenticationMessageContextForStyle:;
- (unsigned int)secureNameForStyle:;
- (id)titleOrigin;
- (double)titleWidth;
- (unsigned long long)contentScaleLevel;
+ (BOOL)supportsSecureCoding;
@end
