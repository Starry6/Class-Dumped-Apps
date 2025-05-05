@interface PBPasteButtonTag : UISSlotTag
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (unsigned long long)failGradeForStyle:;
- (unsigned long long)hitTestInformationMaskForStyle:;
- (id)baseForegroundColorForStyle:;
- (id)_acceptCalloutBarPasteButtonTagVisit:systemInputAssistantPasteButtonTagVisit:undoInteractionHUDIconPasteButtonTagVisit:undoInteractionHUDTextPasteButtonTagVisit:contextMenuPasteButtonTagVisit:editMenuPasteButtonTagVisit:;
+ (BOOL)supportsSecureCoding;
+ (id)undoInteractionHUDTextPasteButtonTagWithMinWidth:;
+ (id)undoInteractionHUDIconPasteButtonTagWithMinWidth:;
+ (id)calloutBarPasteButtonTagWithSecureName:size:titleOrigin:titleWidth:contentScaleLevel:;
+ (id)contextMenuPasteButtonTagWithSecureName:size:titleOrigin:layoutSize:hasTrailingGutter:;
+ (id)systemInputAssistantPasteButtonTagWithSite:;
+ (id)editMenuPasteButtonTagWithSecureName:size:contentOrigin:displayMode:;
@end
