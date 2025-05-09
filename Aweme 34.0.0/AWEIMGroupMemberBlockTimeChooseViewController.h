@interface AWEIMGroupMemberBlockTimeChooseViewController : UIViewController
@property (nonatomic) UILabel confimLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSArray uidArray;
@property (nonatomic) NSArray blockTimeData;
@property (nonatomic) NSArray blockTimeTextData;
@property (nonatomic) q selectedIndex;
@property (nonatomic) UIViewController blockManagerVC;
@property (nonatomic) UIViewController backToVCWhenOperationFailed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (void)__backBtnClicked;
- (void)setUidArray:;
- (void)setBackToVCWhenOperationFailed:;
- (id)initWithConversation:uidArray:;
- (id)blockManagerVC;
- (void)setBlockManagerVC:;
- (id)backToVCWhenOperationFailed;
- (void)__buildDataSource;
- (void)setBlockTimeData:;
- (void)setBlockTimeTextData:;
- (void)__didTapConfirm;
- (id)uidArray;
- (id)blockTimeTextData;
- (id)blockTimeData;
- (id)confimLabel;
- (void)setConfimLabel:;
- (id)collectionView;
- (void)setSelectedIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (long long)selectedIndex;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)conversation;
- (void)setConversation:;
@end
