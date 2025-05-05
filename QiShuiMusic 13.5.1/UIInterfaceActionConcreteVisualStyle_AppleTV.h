@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle
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
- (double)actionSectionSpacing;
- (id)actionSequenceEdgeInsets;
- (id)minimumActionContentSize;
- (BOOL)selectByPressGestureRequired;
- (id)actionViewStateForAttachingToActionRepresentationView:;
- (id)actionImageViewTintColorForImageProperty:actionViewState:;
- (void)configureAttributesForTitleLabel:classificationLabel:actionViewState:;
- (id)actionPropertiesAffectingLabelStyling;
- (void)configureAttributesForActionRepresentationView:actionViewState:;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForActionScrollView:groupViewState:;
- (void)configureForPresentingGroupView:alongsideTransitionCoordinator:;
- (void)configureForDismissingGroupView:alongsideTransitionCoordinator:;
@end
