@interface AWERVExposedMixInfoHeadView : UIView
@property (nonatomic) UIImageView mixIconImageView;
@property (nonatomic) UILabel mixInfoNameLabel;
@property (nonatomic) UILabel updateDescLabel;
@property (nonatomic) UIImageView rightArrowImageView;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (id)mixIconImageView;
- (void)setMixIconImageView:;
- (id)updateDescLabel;
- (id)mixInfoNameLabel;
- (void)setMixInfoNameLabel:;
- (void)setUpdateDescLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
@end
