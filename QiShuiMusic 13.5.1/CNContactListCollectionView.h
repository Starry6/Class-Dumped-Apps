@interface CNContactListCollectionView : UICollectionView
@property (nonatomic) q contactCount;
@property (nonatomic) q duplicateCount;
@property (nonatomic) q selectedCount;
@property (nonatomic) NSObject<CNContactListCountViewDelegate> countViewDelegate;
@property (nonatomic) NSObject<CNContactListCollectionViewDelegate> contactListCollectionViewDelegate;
@property (nonatomic) CNContactListCountFooterView contactCountView;
- (id)init;
- (void)deselectItemAtIndexPath:animated:;
- (void)selectItemAtIndexPath:animated:scrollPosition:;
- (unsigned long long)globalIndexForItemAtIndexPath:;
- (void)updateSelectedContactCount;
- (void)setContactCount:;
- (void)setCountViewDelegate:;
- (void)setSelectedCount:;
- (id)contactListCollectionViewDelegate;
- (id)contactCountView;
- (void)setContactCountView:;
- (void).cxx_destruct;
- (long long)duplicateCount;
- (void)setContactListCollectionViewDelegate:;
- (long long)contactCount;
- (id)countViewDelegate;
- (long long)selectedCount;
- (void)setDuplicateCount:;
@end
