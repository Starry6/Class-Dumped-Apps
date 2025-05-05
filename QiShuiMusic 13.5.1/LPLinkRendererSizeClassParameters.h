@interface LPLinkRendererSizeClassParameters : NSObject
@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL preserveIconAspectRatioAndAlignmentWhenScaling;
@property (nonatomic) BOOL onlyShowIcon;
@property (nonatomic) BOOL disableTextWrapping;
- (id)_cacheKey;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPreserveIconAspectRatioAndAlignmentWhenScaling:;
- (void)setOnlyShowIcon:;
- (void)setAlignButtonWithCaptionTextLeadingEdge:;
- (BOOL)alignButtonWithCaptionTextLeadingEdge;
- (BOOL)preserveIconAspectRatioAndAlignmentWhenScaling;
- (BOOL)onlyShowIcon;
- (BOOL)disableTextWrapping;
- (void)setDisableTextWrapping:;
@end
