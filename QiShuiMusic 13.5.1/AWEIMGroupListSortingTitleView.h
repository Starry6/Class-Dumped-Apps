@interface AWEIMGroupListSortingTitleView : UIView
@property (nonatomic) UILabel mainTitle;
@property (nonatomic) UIView subTitleView;
@property (nonatomic) UIView roundedCornerTriangleView;
@property (nonatomic) UILabel subTitle;
@property (nonatomic) UIButton maskButton;
@property (nonatomic) AWEIMGroupListSortingMenuView menuView;
@property (nonatomic) Q sortingType;
@property (nonatomic) BOOL isMenuExpanding;
@property (nonatomic) <AWEIMGroupListSortingTitleViewProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMenuExpanding;
- (void)setSortingType:;
- (void)__clickOnTitle;
- (void)__foldMenu;
- (id)__menuShownPoint;
- (void)__refreshUI;
- (void)__setupUI;
- (void)__sortByType:;
- (void)__updateSubTitle;
- (void)dismissMenuAndArrow;
- (id)maskButton;
- (id)roundedCornerTriangleView;
- (void)setIsMenuExpanding:;
- (void)setMaskButton:;
- (void)setRoundedCornerTriangleView:;
- (void)setSubTitleView:;
- (unsigned long long)sortingType;
- (id)subTitleView;
- (void)updateMainTitle:;
- (void)disable;
- (void)enable;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)menuView;
- (void)setMenuView:;
- (id)mainTitle;
- (void)setMainTitle:;
- (id)__menuItems;
@end
