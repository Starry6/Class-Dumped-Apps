@interface AWEIMHalfScreenSearchView : UIView
@property (nonatomic) AWESearchBar searchBar;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) NSString searchText;
@property (nonatomic) <AWEIMHalfScreenSearchViewDelegate> delegate;
- (void)endInputText;
- (void)finishSearch;
- (void)p_cancelButtonTapped;
- (void)p_hideCancelButton;
- (void)p_showCancelButton;
- (void)setDelegate:;
- (void)setSearchBar:;
- (id)initWithFrame:;
- (id)searchBar;
- (id)delegate;
- (void).cxx_destruct;
- (id)searchText;
- (void)setCancelButton:;
- (id)cancelButton;
- (void)setSearchText:;
@end
