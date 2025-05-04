@interface AWEDitoPOIMallRankLabel : UIView
@property (nonatomic) YYLabel descLabel;
@property (nonatomic) AWEGradientView iconGradientView;
@property (nonatomic) UIImageView iconView;
- (id)descLabel;
- (void)setDescLabel:;
- (id)iconGradientView;
- (void)configWithRankString:;
- (void)setIconGradientView:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setupUI;
- (double)componentWidth;
@end
