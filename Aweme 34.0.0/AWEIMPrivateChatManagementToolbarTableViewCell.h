@interface AWEIMPrivateChatManagementToolbarTableViewCell : UITableViewCell
@property (nonatomic) UIView cardBaseView;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray toolList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (id)toolList;
- (void)configWithToolList:;
- (void)setToolList:;
- (id)cardBaseView;
- (void)__trackClickKeywordsReplyEvent;
- (void)__trackClickIntroduceQAEvent;
- (void)setCardBaseView:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
+ (id)identifier;
@end
