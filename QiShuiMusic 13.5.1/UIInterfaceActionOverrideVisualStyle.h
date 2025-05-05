@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle
@property (nonatomic) double customSelectionHighlightContinuousCornerRadius;
@property (nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent;
@property (nonatomic) UIInterfaceActionSeparatorAttributes customSeparatorAttributes;
@property (nonatomic) UIInterfaceActionHighlightAttributes customActionHighlightAttributes;
@property (nonatomic) @? customTitleLabelFontProviderForViewState;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)actionTitleLabelFontForViewState:;
- (id)newActionBackgroundViewForViewState:;
- (id)newActionSeparatorViewForGroupViewState:;
- (double)customSelectionHighlightContinuousCornerRadius;
- (void)setCustomSelectionHighlightContinuousCornerRadius:;
- (BOOL)alignActionSeparatorLeadingEdgeWithContent;
- (void)setAlignActionSeparatorLeadingEdgeWithContent:;
- (id)customSeparatorAttributes;
- (void)setCustomSeparatorAttributes:;
- (id)customActionHighlightAttributes;
- (void)setCustomActionHighlightAttributes:;
- (id)customTitleLabelFontProviderForViewState;
- (void)setCustomTitleLabelFontProviderForViewState:;
+ (id)styleOverride;
@end
