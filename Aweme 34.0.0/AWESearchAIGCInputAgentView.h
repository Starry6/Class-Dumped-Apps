@interface AWESearchAIGCInputAgentView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWESearchAIGCInputAgentViewModel viewModel;
@property (nonatomic) <AWESearchAIGCInputAgentViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)cellClassForAgentModel:;
- (BOOL)inputAgentIsEmpty;
- (void)inputAgentRefreshWithVideoID:conversationID:;
- (void)inputAgentRefreshLocalData;
- (void)agentViewModel:updatedWithOldAgentList:;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (id)initWithFrame:delegate:;
- (void)setupUI;
@end
