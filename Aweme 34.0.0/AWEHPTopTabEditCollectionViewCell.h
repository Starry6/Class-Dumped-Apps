@interface AWEHPTopTabEditCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString accessibilityTitleLabel;
@property (nonatomic) UIButton reorderButton;
@property (nonatomic) BOOL isMovable;
@property (nonatomic) UIView dragSnapShot;
@property (nonatomic) @? showCannotMoveToast;
- (void)p_setUI;
- (void)p_updateCorners;
- (void)p_newSetUI;
- (void)p_oldSetUI;
- (id)reorderButton;
- (void)setIsMovable:;
- (id)showCannotMoveToast;
- (void)tapReorderButton;
- (id)dragSnapShot;
- (void)setDragSnapShot:;
- (void)setShowCannotMoveToast:;
- (void)setAccessibilityTitleLabel:;
- (void)setReorderButton:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)accessibilityTitleLabel;
- (void)updateWithModel:;
- (BOOL)isMovable;
+ (id)identifier;
@end
