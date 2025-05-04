@interface AWEPublishPaymentPreviewTableViewCell : UITableViewCell
@property (nonatomic) AWEPublishPaymentPreviewItem model;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel configItemLabel;
@property (nonatomic) UILabel configContentLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) BOOL disableClick;
@property (nonatomic) @? disableShowConfigContent;
- (void)configWithModel:;
- (void)configureUI;
- (id)configContentLabel;
- (void)setDisableClick:;
- (void)setDisableShowConfigContent:;
- (id)configItemLabel;
- (id)disableShowConfigContent;
- (BOOL)disableClick;
- (void)setConfigItemLabel:;
- (void)setConfigContentLabel:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setIconImageView:;
+ (id)cellIdentify;
@end
