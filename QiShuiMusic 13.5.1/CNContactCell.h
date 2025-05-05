@interface CNContactCell : UITableViewCell
@property (nonatomic) NSArray constantConstraints;
@property (nonatomic) NSArray variableConstraints;
@property (nonatomic) double minCellHeight;
@property (nonatomic) CNCardGroupItem cardGroupItem;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) BOOL hasGapBetweenSeparatorAndTrailingEdge;
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setShowSeparator:;
- (void)contentSizeCategoryDidChange:;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)showSeparator;
- (void)_setAnimating:clippingAdjacentCells:;
- (void)setCardGroupItem:;
- (id)variableConstraints;
- (double)minCellHeight;
- (BOOL)shouldPerformDefaultAction;
- (id)constantConstraints;
- (void)performDefaultAction;
- (BOOL)shouldPerformAccessoryAction;
- (void)performAccessoryAction;
- (BOOL)hasGapBetweenSeparatorAndTrailingEdge;
- (id)cardGroupItem;
+ (BOOL)shouldIndentWhileEditing;
@end
