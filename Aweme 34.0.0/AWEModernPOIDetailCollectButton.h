@interface AWEModernPOIDetailCollectButton : UIButton
@property (nonatomic) AWEPOIDetailCollectButtonConfig config;
@property (nonatomic) NSString theme;
@property (nonatomic) Q style;
@property (nonatomic) BOOL collected;
@property (nonatomic) AWEPOICollectView collectImageView;
@property (nonatomic) UILabel collectLabel;
- (BOOL)collected;
- (void)setCollected:;
- (void)setCollected:animated:;
- (id)starView;
- (id)collectImageView;
- (void)setCollectImageView:;
- (id)collectLabel;
- (void)setCollectLabel:;
- (id)theme;
- (void)setConfig:;
- (void)setTheme:;
- (void)setBorderWidth:;
- (id)initWithConfig:;
- (id)intrinsicContentSize;
- (id)config;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setStyle:;
+ (id)collectButtonWithConfig:;
+ (id)collectButtonWithStyle:theme:;
+ (id)collectButtonWithStyle:;
@end
