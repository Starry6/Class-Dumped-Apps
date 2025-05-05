@interface IESLiveVSMessageBoardEmoticonPanelView : UIView
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) @? didOutput;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (void)commentEmoticonPageView:didSelectEmoticon:;
- (id)didOutput;
- (id)initWithTrackParams:;
- (void)setDidOutput:;
- (id)trackParams;
- (void)reloadData;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (void)setupCollectionView;
- (void)setupViews;
@end
