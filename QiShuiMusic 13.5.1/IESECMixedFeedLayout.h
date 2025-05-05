@interface IESECMixedFeedLayout : UICollectionViewFlowLayout
@property (nonatomic) q pageType;
@property (nonatomic) BOOL isOriginY;
@property (nonatomic) <IESECMixedFeedLayoutDelegate> delegate;
@property (nonatomic) NSMutableSet ignoreIndexPaths;
@property (nonatomic) q centerPosition;
@property (nonatomic) double topOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)centerPosition;
- (double)getImageHeightWithCellFrame:;
- (id)ignoreIndexPaths;
- (BOOL)isOriginY;
- (void)scrollViewDidScrollToTop;
- (void)setCenterPosition:;
- (void)setIgnoreIndexPaths:;
- (void)setIsOriginY:;
- (id)init;
- (void)setDelegate:;
- (double)topOffset;
- (void)setTopOffset:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPageType:;
- (long long)pageType;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
@end
