@interface AWEIMShareImpl.ShareContactListView : UIView
@property (nonatomic) Q state;
@property (nonatomic) AWEIMShareContactListTrackInfo trackInfo;
@property (nonatomic) AWEIMShareContactListConfig config;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)interactingGestures;
- (void)updateSelectState:withShareModel:;
- (void)updateAdditionTextPreviewImage;
- (void)handleTapOutsideOfPanel;
- (id)listView;
- (unsigned long long)state;
- (double)height;
- (id)trackInfo;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)didMoveToWindow;
@end
