@interface AWEDiscoverDHorizontalPlaceholderCell : UICollectionViewCell
@property (nonatomic) UIView mainPlaceholderView;
@property (nonatomic) UIView titlePlaceholderView;
@property (nonatomic) UIView descPlaceholderView;
- (void)configureUI;
- (id)cellController;
- (id)mainPlaceholderView;
- (id)titlePlaceholderView;
- (id)descPlaceholderView;
- (void)setMainPlaceholderView:;
- (void)setTitlePlaceholderView:;
- (void)setDescPlaceholderView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)reuseIdentifier;
@end
