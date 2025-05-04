@interface AWEFeedDoubleColumnFlexPinchSkeletonView : UIView
@property (nonatomic) UIColor topBarGradientViewColor;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView topBarSkeletonView;
@property (nonatomic) UIView doubleColumnSkeletonView;
@property (nonatomic) AWEGradientView gradientView;
- (id)createGradientView;
- (id)createTopBarSkeletonView;
- (void)addRoundingCornerWithView:byRoundingCorners:cornerRadii:;
- (id)initWithTopBarGradientViewColor:;
- (void)setTopBarSkeletonView:;
- (id)topBarSkeletonView;
- (id)createDoubleColumnSkeletonView;
- (void)setDoubleColumnSkeletonView:;
- (id)doubleColumnSkeletonView;
- (id)createSkeletonViewWithColor:cornerRadius:;
- (id)topBarGradientViewColor;
- (id)createDoubleColumnCellSkeletonView;
- (void)setTopBarGradientViewColor:;
- (id)gradientView;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setGradientView:;
- (void)setupUI;
@end
