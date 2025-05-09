@interface AWEIMGroupListSortingTitleView : UIView
@property (nonatomic) q preferredWidth;
@property (nonatomic) UIView gesMaskView;
@property (nonatomic) UIButton maskButton;
@property (nonatomic) UILabel mainTitle;
@property (nonatomic) UIView subTitleView;
@property (nonatomic) UILabel subTitle;
@property (nonatomic) UIView roundedCornerTriangleView;
@property (nonatomic) AWEIMGroupListSortingMenuView menuView;
@property (nonatomic) UIView<IESIMPopoverProtocol> popoverMenu;
@property (nonatomic) NSArray menuItemModels;
@property (nonatomic) q lastSelectedIndex;
@property (nonatomic) q currentSelectedIndex;
@property (nonatomic) BOOL isMenuExpanding;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) <AWEIMGroupListSortingTitleViewProtocol> delegate;
@property (nonatomic) Q colorTheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (long long)currentSelectedIndex;
- (void)setCurrentSelectedIndex:;
- (void)setSubTitleView:;
- (id)subTitleView;
- (void)__refreshUI;
- (long long)lastSelectedIndex;
- (void)setLastSelectedIndex:;
- (void)setMaskButton:;
- (id)maskButton;
- (id)popoverMenu;
- (void)setPopoverMenu:;
- (id)gesMaskView;
- (void)setGesMaskView:;
- (void)updateMainTitle:;
- (void)configWithMenuViewItemModels:currentSortedTypeIndex:preferredWidth:;
- (void)foldMenuIfNeeded;
- (BOOL)isMenuExpanding;
- (void)__foldMenu;
- (id)roundedCornerTriangleView;
- (void)setMenuItemModels:;
- (void)__updateSelectionStatus;
- (id)menuItemModels;
- (void)__expandMenu;
- (void)setIsMenuExpanding:;
- (void)__sortByTypeAtIndex:;
- (void)adjustDarkMode:;
- (void)__clickOnTitle;
- (void)__tapOnMask;
- (void)__panOnMaskWithGes:;
- (void)setRoundedCornerTriangleView:;
- (void)enable;
- (void)disable;
- (id)init;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setSubTitle:;
- (long long)preferredWidth;
- (id)subTitle;
- (unsigned long long)colorTheme;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)setColorTheme:;
- (void)setPreferredWidth:;
- (void)setDelegate:;
- (id)menuView;
- (void)setMenuView:;
- (id)mainTitle;
- (void)setMainTitle:;
@end
