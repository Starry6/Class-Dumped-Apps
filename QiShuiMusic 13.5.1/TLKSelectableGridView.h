@interface TLKSelectableGridView : TLKView
@property (nonatomic) NUIContainerGridView contentView;
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) NSArray tuples;
@property (nonatomic) q selectedIndex;
@property (nonatomic) <TLKSelectableGridViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)selectedIndex;
- (void)setDelegate:;
- (id)buttons;
- (id)delegate;
- (void).cxx_destruct;
- (void)setButtons:;
- (void)setSelectedIndex:;
- (id)_createButton;
- (id)tuples;
- (id)containerView:systemLayoutSizeFittingSize:forArrangedSubview:;
- (void)containerView:willMeasureArrangedSubviewsFittingSize:forReason:;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)selectableGridButtonPressed:;
- (void)setTuples:;
- (id)arrangedEntrySubviews;
+ (unsigned long long)maxColumns;
+ (unsigned long long)idealNumberOfColumnsForTitles:fittingSize:containerView:;
@end
