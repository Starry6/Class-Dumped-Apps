@interface AWETheaterMoreHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEGradientView gradientView;
@property (nonatomic) BOOL enableAdapterPad;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)duxGrid_updateHorizontalBreakPointWithConfig:;
- (BOOL)enableAdapterPad;
- (void)refreshMarginIfNeeded;
- (void)setEnableAdapterPad:;
- (id)gradientView;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (id)titleLabel;
- (void)setupSubviews;
@end
