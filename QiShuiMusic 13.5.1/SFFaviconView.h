@interface SFFaviconView : UIView
@property (nonatomic) UIImage icon;
@property (nonatomic) q iconContentMode;
@property (nonatomic) UIImageSymbolConfiguration preferredSymbolConfiguration;
@property (nonatomic) UIColor themeColor;
@property (nonatomic) double trailingInset;
@property (nonatomic) @? trailingInsetChangeHandler;
- (void)setPreferredSymbolConfiguration:;
- (id)themeColor;
- (id)preferredSymbolConfiguration;
- (void)setIconContentMode:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateIconBackingColorAndInset;
- (id)icon;
- (id)_determineIconBackingColorAndInsets:;
- (double)trailingInset;
- (id)trailingInsetChangeHandler;
- (id)initWithFrame:;
- (void)setThemeColor:;
- (void)setIcon:;
- (void).cxx_destruct;
- (long long)iconContentMode;
- (void)setTrailingInset:;
- (void)setTrailingInsetChangeHandler:;
@end
