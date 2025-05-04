@interface AWESearchSeedContentView : UIView
@property (nonatomic) AWESearchSeedFilterDoubleSectionView doubleContView;
@property (nonatomic) <AWESearchSeedContentViewDelegate> delegate;
@property (nonatomic) AWESearchSeedFilterViewUtil configInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureUI;
- (void)selectedIndexPath:;
- (void)filterCollectionView:didSelectIndex:lastSelected:;
- (double)getRealScreenWidth;
- (id)doubleContView;
- (double)sizeForInner:;
- (id)congfigPosition;
- (void)configureWithModel:selectedIndex:;
- (void)setDoubleContView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)configInfo;
- (void)setConfigInfo:;
+ (double)getHeightForFilterModel:;
@end
