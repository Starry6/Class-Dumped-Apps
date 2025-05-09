@interface UIInterfaceActionGroup : NSObject
@property (nonatomic) NSPointerArray weakDisplayPropertyObservers;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray actionsBySection;
@property (nonatomic) {CGSize=dd} leadingImageLayoutSize;
@property (nonatomic) {CGSize=dd} trailingImageLayoutSize;
@property (nonatomic) UIInterfaceActionVisualStyle visualStyle;
@property (nonatomic) NSArray actions;
@property (nonatomic) UIInterfaceAction preferredAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_visualStyle;
- (id)title;
- (id)actions;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)_setVisualStyle:;
- (void)setLeadingImageLayoutSize:;
- (id)leadingImageLayoutSize;
- (void)setTrailingImageLayoutSize:;
- (id)trailingImageLayoutSize;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_notifyObserversDidChangeActionProperty:;
- (id)weakDisplayPropertyObservers;
- (void)interfaceAction:reloadDisplayedContentActionProperties:;
- (void)interfaceAction:reloadDisplayedContentVisualStyle:;
- (id)initWithTitle:actionsBySection:;
- (void)setPreferredAction:;
- (void)_addActionGroupDisplayPropertyObserver:;
- (void)_removeActionGroupDisplayPropertyObserver:;
- (void)_updateActionImageLayoutSizes;
- (void)_reloadImageLayoutSizesUsingExistingActionImages;
- (void)_performWithActionObservingDisabled:;
- (void)_beginObservingActions;
- (void)_endObservingActions;
- (id)_deepCopyOfActionsBySection;
- (id)preferredAction;
- (id)actionsBySection;
+ (id)actionGroupWithActions:;
+ (BOOL)changedProperties:containsAny:;
+ (id)actionGroupWithActionsBySection:;
@end
