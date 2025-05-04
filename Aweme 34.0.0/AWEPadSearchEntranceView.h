@interface AWEPadSearchEntranceView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIImageView borderImageView;
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) UILabel searchTextLabel;
- (void)awe_themeDidChange:;
- (id)aAWEPadModuleAdapter;
- (double)topCTAFloat:;
- (id)searchTextLabel;
- (id)borderImageView;
- (void)setSearchTextLabel:;
- (void)setBorderImageView:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (id)searchIconImageView;
- (void)setSearchIconImageView:;
- (void)setupView;
- (void)setBackgroundImageView:;
+ (Class)aAWEPadModuleAdapterClass;
@end
