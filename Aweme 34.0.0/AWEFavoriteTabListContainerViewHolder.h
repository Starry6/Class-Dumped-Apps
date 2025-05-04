@interface AWEFavoriteTabListContainerViewHolder : AWEBaseTabListViewHolder
@property (nonatomic) AWEFavoriteSegmentedControl segmentedControl;
@property (nonatomic) UIView bottomLine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupViewHolder;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (void)containerViewWillDisappear;
- (void)containerViewWillAppear;
- (id)tabLockIconImage;
- (id)tabLockSelectedIconImage;
- (id)tabRedDotImage;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;
- (id)segmentedControl;
- (void)setSegmentedControl:;
- (id)bottomLine;
- (void)setBottomLine:;
@end
