@interface AWENearbyC2FeedCell : AWENearbyC2BaseFeedCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UICollectionView collectionView;
- (void)didClick;
- (void)handleTapGes:;
- (void)endDisplay;
- (BOOL)trackClientClickEnable;
- (void)configCellWithModel:withIndex:cellWidth:pageContext:;
- (void)onClickWithModel:;
- (void)willDisplayWhenDidAppear;
- (void)resetChildViewController;
- (void)addChildVCWithCellWidth:;
- (void)prepareForReuse;
- (id)initWithFrame:;
+ (id)calculateCellSizeWithWidth:model:;
@end
