@interface IESECShopSearchNavView : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) IESECShopSearchBar searchBar;
@property (nonatomic) <IESECShopSearchNavViewDelegate> delegate;
@property (nonatomic) @? searchBarRightCustomButtonTappedBlock;
- (void)convertResultState:;
- (id)searchBarRightCustomButtonTappedBlock;
- (void)searchButtonTapped;
- (void)setSearchBarRightCustomButtonTappedBlock:;
- (void)shopSearchBar:textDidChange:;
- (void)shopSearchBarCameraButtonClicked:;
- (void)shopSearchBarSearchButtonClicked:;
- (void)shopSearchBarTextDidBeginEditing:;
- (void)setDelegate:;
- (id)backButton;
- (void)setTitle:;
- (void)setPlaceholder:;
- (void)setSearchBar:;
- (id)initWithFrame:;
- (id)searchBar;
- (id)delegate;
- (void).cxx_destruct;
- (void)setBackButton:;
- (void)setupUI;
- (void)backButtonTapped;
@end
