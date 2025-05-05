@interface PBUndoInteractionHUDTextPasteButtonTag : PBPasteButtonTag
@property (nonatomic) double minWidth;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (double)minWidth;
- (BOOL)isEqual:;
- (id)resolvedStyleForStyle:;
- (id)_acceptCalloutBarPasteButtonTagVisit:systemInputAssistantPasteButtonTagVisit:undoInteractionHUDIconPasteButtonTagVisit:undoInteractionHUDTextPasteButtonTagVisit:contextMenuPasteButtonTagVisit:editMenuPasteButtonTagVisit:;
- (unsigned long long)authenticationMessageContextForStyle:;
- (unsigned int)secureNameForStyle:;
- (id)initWithMinWidth:;
+ (BOOL)supportsSecureCoding;
@end
