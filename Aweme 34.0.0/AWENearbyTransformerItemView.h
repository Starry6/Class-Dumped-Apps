@interface AWENearbyTransformerItemView : UIView
@property (nonatomic) AWENearbyTransformerTab transformer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel themeTitleLabel;
@property (nonatomic) UILabel themeSubtitleLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) CALayer gradientLayer;
@property (nonatomic) <AWENearbyTransformerItemViewDataSource> dataSource;
@property (nonatomic) <AWENearbyTransformerItemViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clicked:;
- (void)setInFeed:;
- (void)updateWithTransformer:;
- (id)themeTitleLabel;
- (id)themeSubtitleLabel;
- (void)setThemeTitleLabel:;
- (void)setThemeSubtitleLabel:;
- (void)updateIconViewWithIcons:;
- (void)updateGradientLayerWithbackground:;
- (void)configIconViewWithURL:;
- (id)gradientLayerWithString:;
- (id)initWithTransformer:style:;
- (void)setThumbnailProcess:;
- (void)setTransformer:;
- (id)transformer;
- (id)init;
- (id)delegate;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)dataSource;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)updateUI;
@end
