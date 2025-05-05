@interface NUIContainerBoxView : NUIContainerView
@property (nonatomic) q horizontalAlignment;
@property (nonatomic) q verticalAlignment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)verticalAlignment;
- (id)debugDictionary;
- (void)dealloc;
- (void)setVerticalAlignment:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithArrangedSubviews:;
- (void)setHorizontalAlignment:;
- (long long)horizontalAlignment;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:;
- (id)calculateArrangedSizeFittingSize:;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (void)layoutArrangedSubviewsInBounds:;
- (void)invalidateInternalStateForInvalidation:;
- (id)arrangedDebugDescription;
- (void)populateBoxArrangementCells:;
+ (id)containerBoxViewWithArrangedSubviews:;
@end
