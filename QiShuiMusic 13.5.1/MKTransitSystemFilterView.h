@interface MKTransitSystemFilterView : UIView
@property (nonatomic) NSArray transitSystems;
@property (nonatomic) <MKTransitSystemFilterViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)_setupConstraints;
- (void)setDelegate:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)transitSystems;
- (void)_updateAppearance;
- (void)_contentSizeDidChange;
- (void)_setupCollectionView;
- (void)setTransitSystems:;
@end
