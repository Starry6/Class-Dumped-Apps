@interface FLEXExplorerToolbar : UIView
@property (nonatomic) FLEXExplorerToolbarItem globalsItem;
@property (nonatomic) FLEXExplorerToolbarItem hierarchyItem;
@property (nonatomic) FLEXExplorerToolbarItem selectItem;
@property (nonatomic) FLEXExplorerToolbarItem recentItem;
@property (nonatomic) FLEXExplorerToolbarItem moveItem;
@property (nonatomic) FLEXExplorerToolbarItem closeItem;
@property (nonatomic) UIView dragHandle;
@property (nonatomic) UIImageView dragHandleImageView;
@property (nonatomic) UIView selectedViewDescriptionContainer;
@property (nonatomic) UIView selectedViewDescriptionSafeAreaContainer;
@property (nonatomic) UIView selectedViewColorIndicator;
@property (nonatomic) UILabel selectedViewDescriptionLabel;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) NSArray toolbarItems;
@property (nonatomic) UIColor selectedViewOverlayColor;
@property (nonatomic) NSString selectedViewDescription;
- (id)initWithFrame:;
- (void)layoutSubviews;
- (void)setToolbarItems:;
- (void)setSelectedViewOverlayColor:;
- (void)setSelectedViewDescription:;
- (id)sizeThatFits:;
- (id)safeArea;
- (id)toolbarItems;
- (id)selectItem;
- (void)setSelectItem:;
- (id)hierarchyItem;
- (void)setHierarchyItem:;
- (id)moveItem;
- (void)setMoveItem:;
- (id)recentItem;
- (void)setRecentItem:;
- (id)globalsItem;
- (void)setGlobalsItem:;
- (id)closeItem;
- (void)setCloseItem:;
- (id)dragHandle;
- (void)setDragHandle:;
- (id)selectedViewOverlayColor;
- (id)selectedViewDescription;
- (id)selectedViewDescriptionContainer;
- (void)setSelectedViewDescriptionContainer:;
- (id)dragHandleImageView;
- (void)setDragHandleImageView:;
- (id)selectedViewDescriptionSafeAreaContainer;
- (void)setSelectedViewDescriptionSafeAreaContainer:;
- (id)selectedViewColorIndicator;
- (void)setSelectedViewColorIndicator:;
- (id)selectedViewDescriptionLabel;
- (void)setSelectedViewDescriptionLabel:;
- (id)backgroundView;
- (void)setBackgroundView:;
- (void).cxx_destruct;
+ (id)descriptionLabelFont;
+ (double)toolbarItemHeight;
+ (double)dragHandleWidth;
+ (double)descriptionLabelHeight;
+ (double)descriptionVerticalPadding;
+ (double)descriptionContainerHeight;
+ (double)selectedViewColorIndicatorDiameter;
+ (double)horizontalPadding;
@end
