@interface AWEPlayInteractionLongVideoDescriptionElement : AWEPlayInteractionDescriptionElement
@property (nonatomic) double originLeftContainerWidth;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL tracked;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)layoutElementView;
- (unsigned long long)descriptionNumberOfLines;
- (void)trackForShow;
- (void)setLeftContainerWidth:;
- (double)descriptionLabelConstraintWidth;
- (void)updateDescLabelIfExpand:commentEnterSource:;
- (void)customDescriptionLabelContainer:;
- (void)descriptionElementWillExpanded:;
- (double)originLeftContainerWidth;
- (void)setOriginLeftContainerWidth:;
- (void)setIsExpanded:;
- (BOOL)isExpanded;
- (BOOL)tracked;
- (void)setTracked:;
@end
