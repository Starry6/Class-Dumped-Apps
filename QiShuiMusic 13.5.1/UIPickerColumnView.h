@interface UIPickerColumnView : UIView
@property (nonatomic) BOOL isNoLongerInUse;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} selectionBarRect;
@property (nonatomic) q selectionBarRow;
@property (nonatomic) UIColor _textColor;
@property (nonatomic) double rowHeight;
@property (nonatomic) {CATransform3D=dddddddddddddddd} perspectiveTransform;
@property (nonatomic) double leftHitTestExtension;
@property (nonatomic) double rightHitTestExtension;
@property (nonatomic) UIView view;
@property (nonatomic) UIView highlightedRegion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (id)accessibilityFrame;
- (void)_moveTableViewIfNecessary:toContentOffset:;
- (double)_horizontalBiasForEndTables;
- (void)beginUpdates;
- (void)setRightHitTestExtension:;
- (void)setPerspectiveTransform:;
- (BOOL)_soundsEnabled;
- (void)_setTextColor:;
- (BOOL)canBecomeFocused;
- (void)endUpdates;
- (id)_visibleCellClosestToPoint:inView:;
- (void)setAllowsMultipleSelection:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)_createContainerViewWithFrame:;
- (void)_sendCheckedRow:inTableView:checked:;
- (id)_visibleGlobalRows;
- (id)initWithFrame:tableFrame:middleBarHeight:rowHeight:pickerView:transform:;
- (BOOL)selectRow:animated:notify:;
- (BOOL)isNoLongerInUse;
- (BOOL)_usesCheckSelection;
- (id)_tableFrame;
- (void)setIsNoLongerInUse:;
- (BOOL)isRowChecked:;
- (id)_defaultFocusRegionFrame;
- (id)_textColor;
- (void)setLeftHitTestExtension:;
- (long long)numberOfRowsInSection:;
- (id)view;
- (BOOL)_containsTable:;
- (id)_preferredTable;
- (BOOL)selectRow:animated:notify:updateChecked:;
- (id)cellForRowAtIndexPath:;
- (id)perspectiveTransform;
- (id)selectionBarRect;
- (double)rightHitTestExtension;
- (void)_pickerTableViewDidChangeContentOffset:;
- (void).cxx_destruct;
- (void)pickerTableView:didChangeSelectionBarRowFrom:to:;
- (id)_viewToAddFocusLayer;
- (id)_createTableViewWithFrame:containingFrame:;
- (void)setSelectionBarRect:;
- (double)rowHeight;
- (id)highlightedRegion;
- (double)leftHitTestExtension;
- (void)markAsNoLongerInUse;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:animated:;
- (id)_allVisibleCells;
- (id)_transformForTableWithTranslationX:;
- (BOOL)_pointLiesWithinEffectiveTableBounds:;
- (id)_defaultFocusEffect;
- (void)setRowHeight:;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)_transformForTableWithPerspectiveTranslationX:;
- (long long)selectionBarRow;
- (long long)tableView:numberOfRowsInSection:;
- (void)_centerTableInContainer:;
@end
