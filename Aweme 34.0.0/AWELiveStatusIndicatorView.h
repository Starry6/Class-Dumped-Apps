@interface AWELiveStatusIndicatorView : UIView
@property (nonatomic) UIView indicatorView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) NSNumber fixedThemeStyle;
@property (nonatomic) NSString content;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (void)p_initUI;
- (void)awe_themeReload;
- (void)updateLiveStatusContent:;
- (id)p_indicatorBorderColor;
- (void)setFixedThemeStyle:;
- (id)fixedThemeStyle;
- (void)specifyIndicatorBorderColor:;
- (void)specifyFixedThemeStyle:;
- (void)setBorderColor:;
- (id)content;
- (id)borderColor;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setStatusLabel:;
- (id)statusLabel;
@end
