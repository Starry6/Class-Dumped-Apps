@interface CNActionsView : UIView
@property (nonatomic) NSMutableDictionary actionItemsByType;
@property (nonatomic) NSMutableDictionary actionViewsByType;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) NUIContainerStackView containerView;
@property (nonatomic) NSObject<CNActionsViewProtocol> actionsDelegate;
@property (nonatomic) NSArray sortedActionTypes;
@property (nonatomic) double spacing;
@property (nonatomic) q style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)titleFont;
- (double)spacing;
- (void)setSpacing:;
- (void)setTitleFont:;
- (id)intrinsicContentSize;
- (id)containerView;
- (void)setContainerView:;
- (void)setStyle:;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)actionsDelegate;
- (void)setActionsDelegate:;
- (long long)style;
- (void)didPressActionView:longPress:;
- (BOOL)actionViewShouldPresentDisambiguationUI:;
- (id)actionViewForType:;
- (void)setSortedActionTypes:;
- (unsigned long long)insertionIndexForType:;
- (void)addActionItem:;
- (void)removeActionItem:;
- (void)updateActionItem:;
- (void)updateAxis;
- (void)resetActions;
- (id)sortedActionTypes;
- (id)actionItemsByType;
- (void)setActionItemsByType:;
- (id)actionViewsByType;
- (void)setActionViewsByType:;
+ (long long)axisWithTitlesPresent:;
@end
