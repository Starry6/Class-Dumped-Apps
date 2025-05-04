@interface AWEVSCacheVideoEmptyView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
- (void)p_setPlaceholderImage;
- (void)p_receiveUIThemeDidChangeNotification;
- (void)dealloc;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)p_commonInit;
@end
