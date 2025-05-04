@interface AWEVideoHallSearchCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel placeholderWordLabel;
@property (nonatomic) UILabel searchLabel;
@property (nonatomic) UIView dividedLine;
@property (nonatomic) AWEVideoHallPageContext context;
- (void)configWithContext:;
- (void)setSearchLabel:;
- (id)dividedLine;
- (id)placeholderWordLabel;
- (void)setPlaceholderWordLabel:;
- (void)setDividedLine:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)searchLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
@end
