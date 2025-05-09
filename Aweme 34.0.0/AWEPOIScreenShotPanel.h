@interface AWEPOIScreenShotPanel : UIViewController
@property (nonatomic) UIImage image;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView itemContainerView;
@property (nonatomic) NSArray itemViews;
@property (nonatomic) AWEPOICollectObject collectObject;
@property (nonatomic) BOOL isFavorited;
@property (nonatomic) AWEPOIScreenShootPanelSheet sheet;
@property (nonatomic) @? onFavoriteBlock;
- (void)setIsFavorited:;
- (void)setItemContainerView:;
- (id)collectObject;
- (void)setCollectObject:;
- (void)shareToIMMessage;
- (void)shareToWe1chat;
- (void)onTapFavorite;
- (id)onFavoriteBlock;
- (void)setOnFavoriteBlock:;
- (id)image;
- (void)setImage:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithImage:;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (id)itemContainerView;
- (id)itemViews;
- (void)setItemViews:;
- (BOOL)isFavorited;
- (id)sheet;
- (void)setSheet:;
@end
