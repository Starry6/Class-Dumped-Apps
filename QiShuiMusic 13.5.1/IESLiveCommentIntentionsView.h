@interface IESLiveCommentIntentionsView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) IESLiveCommentIntentionsViewModel viewModel;
@property (nonatomic) <IESLiveCommentIntentionsViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSelectEntryModel:fusionEmoji:;
- (void)hideIntentions;
- (void)refreshIntentionEntries;
- (void)dealloc;
- (id)viewModel;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)initWithViewModel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (void)setViewModel:;
- (void)setupViews;
@end
