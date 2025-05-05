@interface CNContactListCountFooterView : UICollectionViewListCell
@property (nonatomic) q contactCount;
@property (nonatomic) q duplicateCount;
@property (nonatomic) q selectedCount;
@property (nonatomic) NSObject<CNContactListCountViewDelegate> delegate;
- (id)primaryText;
- (void)didSelectViewAllDuplicates;
- (void)setContactCount:;
- (void)setDelegate:;
- (BOOL)shouldDisplayContactCount;
- (void)setSelectedCount:;
- (id)secondaryText;
- (id)initWithFrame:;
- (id)countViewConfiguration;
- (id)delegate;
- (BOOL)shouldDisplayDuplicateCount;
- (void).cxx_destruct;
- (long long)duplicateCount;
- (BOOL)shouldDisplaySelectedCount;
- (long long)contactCount;
- (long long)selectedCount;
- (id)countStringForLocalizedStringKey:count:;
- (void)setDuplicateCount:;
@end
