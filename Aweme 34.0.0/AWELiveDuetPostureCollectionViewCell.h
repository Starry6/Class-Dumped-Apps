@interface AWELiveDuetPostureCollectionViewCell : AWEStudioBaseCollectionViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView selectedIndicatorView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) BOOL isCellSelected;
- (void)addSubviews;
- (id)selectedIndicatorView;
- (BOOL)isCellSelected;
- (void)setIsCellSelected:;
- (void)setSelectedIndicatorView:;
- (void)updateSelectedStatus:;
- (void)updateIconImage:;
- (void)tapAnimation;
- (void)indicatorAppear;
- (void)indicatorDisappear;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setIconImageView:;
- (void)setTapGesture:;
@end
