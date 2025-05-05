@interface MKExploreGuidesReusableView : UICollectionReusableView
@property (nonatomic) MKExploreGuidesView exploreGuidesView;
- (void).cxx_destruct;
- (void)configureWithExploreGuides:tapHandler:;
- (id)exploreGuidesView;
- (void)setExploreGuidesView:;
+ (id)reuseIdentifier;
@end
