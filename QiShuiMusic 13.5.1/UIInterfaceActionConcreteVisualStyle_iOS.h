@interface UIInterfaceActionConcreteVisualStyle_iOS : UIInterfaceActionConcreteVisualStyle
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)contentCornerRadius;
- (id)contentMargin;
- (id)defaultScreen;
- (double)horizontalImageContentSpacing;
- (double)verticalImageContentSpacing;
- (id)actionTitleLabelFontForViewState:;
- (id)actionTitleLabelColorForViewState:;
- (id)newActionBackgroundViewForViewState:;
- (id)newGroupBackgroundViewWithGroupViewState:;
- (BOOL)selectionFeedbackEnabled;
- (BOOL)selectByIndirectPointerTouchRequired;
- (id)newActionSeparatorViewForGroupViewState:;
- (id)newSectionSeparatorViewForGroupViewState:;
- (id)_regularActionFont;
- (id)_preferredActionFont;
- (id)_highlightedView;
@end
