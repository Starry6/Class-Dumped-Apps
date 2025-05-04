@interface AWEIMChatSettingPanelHeaderView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) AWEIMChatSettingPanelHeaderViewProps props;
@property (nonatomic) double titleHeight;
@property (nonatomic) double subtitleHeight;
- (void)addSubviews;
- (void)setTitleHeight:;
- (double)subtitleHeight;
- (id)initWithProps:;
- (void)setupLabelTextsWithProps:;
- (void)layoutSubviewsWithProps:;
- (void)setSubtitleHeight:;
- (id)props;
- (double)headerViewHeight;
- (void)setSubtitleLabel:;
- (double)titleHeight;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)subtitleLabel;
- (id)imageView;
- (void)setProps:;
+ (id)commonTitleAttrStringWithString:;
+ (id)commonSubtitleAttrStringWithString:;
@end
