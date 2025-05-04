@interface AWEYapTransferAccountsTips : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIView contentContainerView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL enableScrolling;
- (void)setEnableScrolling:;
- (void)setupContentContainerView;
- (BOOL)p_shouldTriggerScrolling;
- (BOOL)enableScrolling;
- (void)startRollingText;
- (id)contentContainerView;
- (id)iconImage;
- (id)init;
- (id)content;
- (void)setIconImage:;
- (void)setContentContainerView:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setContent:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)contentLabel;
- (void)setContentLabel:;
@end
