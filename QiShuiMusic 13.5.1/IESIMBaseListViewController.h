@interface IESIMBaseListViewController : UIViewController
@property (nonatomic) IESIMBaseListViewHolder viewHolder;
@property (nonatomic) IESIMBaseListViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadContainer;
- (void)setupViewHolder;
- (id)sectionViewModels;
- (void)setViewHolder:;
- (void)setupViewModel;
- (id)viewHolder;
- (id)viewModel;
- (void)updateContainer:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupCollectionView;
+ (Class)viewHolderClass;
+ (Class)viewModelClass;
@end
