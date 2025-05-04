@interface AWERVAnchorItemView : UIView
@property (nonatomic) UIGestureRecognizer ges;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) BOOL disableTap;
@property (nonatomic) @? tapHandler;
- (void)setGes:;
- (id)ges;
- (void)setDisableTap:;
- (void)configWithIconUrls:defaultIcon:content:attributeContent:;
- (BOOL)disableTap;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setTapHandler:;
- (id)tapHandler;
@end
