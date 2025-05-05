@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle
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
- (id)minimumActionContentSize;
- (BOOL)selectByPressGestureRequired;
- (id)newActionSeparatorViewForGroupViewState:;
- (id)_regularActionFont;
- (id)_preferredActionFont;
- (id)_highlightedActionTitleLabelColorForViewState:;
- (id)_normalActionTitleLabelColorForViewState:;
@end
