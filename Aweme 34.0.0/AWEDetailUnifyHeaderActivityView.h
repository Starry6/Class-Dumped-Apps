@interface AWEDetailUnifyHeaderActivityView : UIControl
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel goCreateLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)configWithStyle:model:;
- (id)goCreateLabel;
- (void)setupUIWithStyle:;
- (void)setGoCreateLabel:;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
