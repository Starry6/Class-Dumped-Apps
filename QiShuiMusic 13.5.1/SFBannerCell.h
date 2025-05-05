@interface SFBannerCell : UICollectionViewCell
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) @? dismissHandler;
@property (nonatomic) q bannerStyle;
- (long long)bannerStyle;
- (void)setDismissHandler:;
- (void)setModel:;
- (void)_updateVibrancy;
- (void)setMessage:;
- (void)layoutSubviews;
- (void)_updateStyle;
- (id)initWithFrame:style:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)_dismiss:;
- (id)focusEffect;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)setBannerStyle:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (id)dismissHandler;
- (id)initWithStyle:;
+ (id)reuseIdentifier;
@end
