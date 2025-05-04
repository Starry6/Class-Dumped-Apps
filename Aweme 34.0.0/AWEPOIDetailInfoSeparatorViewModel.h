@interface AWEPOIDetailInfoSeparatorViewModel : AWEPOIDetailInfoBaseViewModel
@property (nonatomic) UIView separator;
@property (nonatomic) UIView topSeparator;
- (void)setupViewModel;
- (void)updateSeparator;
- (void)showTopSeparatorWithYOffset:;
- (void)setSeparator:;
- (id)separator;
- (void).cxx_destruct;
- (id)topSeparator;
- (void)setTopSeparator:;
- (void)updateWithModel:;
- (void)hideSeparator;
- (void)hideTopSeparator;
@end
