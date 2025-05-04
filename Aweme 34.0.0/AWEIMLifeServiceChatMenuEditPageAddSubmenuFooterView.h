@interface AWEIMLifeServiceChatMenuEditPageAddSubmenuFooterView : UICollectionReusableView
@property (nonatomic) AWEIMLifeServiceChatMenuEditPageAddMenuContentView addMenuView;
@property (nonatomic) <AWEIMLifeServiceChatMenuEditPageCollectionViewCellDelegate> delegate;
@property (nonatomic) q section;
- (id)addMenuView;
- (void)setAddMenuView:;
- (void)__didClickAddSubmenuView;
- (void)setSection:;
- (id)delegate;
- (id)initWithFrame:;
- (long long)section;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
+ (id)identifier;
@end
