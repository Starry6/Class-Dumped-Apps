@interface CNContactGroupPickerViewController : UIViewController
@property (nonatomic) CNAccountsAndGroupsDataSource accountsAndGroupsDataSource;
@property (nonatomic) NSArray sourceAccountExternalIdentifiers;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewDiffableDataSource diffableDataSource;
@property (nonatomic) _UIDiffableDataSourceOutlineSectionController sectionController;
@property (nonatomic) <CNContactGroupPickerViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (id)diffableDataSource;
- (void)setSectionController:;
- (void)setDiffableDataSource:;
- (void)cancel:;
- (void)setAccountsAndGroupsDataSource:;
- (void)setDelegate:;
- (void)setSourceAccountExternalIdentifiers:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (BOOL)collectionView:shouldHighlightItemAtIndexPath:;
- (void)setCollectionView:;
- (id)sectionController;
- (id)delegate;
- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:;
- (BOOL)collectionView:shouldSelectItemAtIndexPath:;
- (id)sourceAccountExternalIdentifiers;
- (id)accountsAndGroupsDataSource;
- (id)collectionView;
- (id)initWithContactStore:;
- (void)viewDidLoad;
- (void)setupCollectionView;
- (id)initWithContactStore:sourceAccountExternalIdentifiers:;
- (void)setupNavigationButtons;
- (id)bottomSeparatorInsetsForIndexPath:configuration:;
- (void)setupDiffableDataSource;
- (id)cellAccessoriesForItem:enabled:;
- (id)accessoryTintColorForStateEnabled:;
- (BOOL)isValidGroupAtIndexPath:;
+ (id)os_log;
@end
