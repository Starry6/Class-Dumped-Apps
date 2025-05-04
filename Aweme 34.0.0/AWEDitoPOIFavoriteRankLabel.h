@interface AWEDitoPOIFavoriteRankLabel : UIView
@property (nonatomic) YYLabel descLabel;
@property (nonatomic) AWEGradientView iconGradientView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) BOOL shouldShowLargeMode;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setShouldShowLargeMode:;
- (id)iconGradientView;
- (BOOL)shouldShowLargeMode;
- (void)configWithRankString:;
- (void)setIconGradientView:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
