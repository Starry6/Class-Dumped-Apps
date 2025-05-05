@interface IESECGoodsFeedTitleView : UIView
@property (nonatomic) IESECGoodsTitleLabel goodsTitleLabel;
@property (nonatomic) UIImageView indicateImageView;
- (id)goodsTitleLabel;
- (void)configUI;
- (id)indicateImageView;
- (void)setGoodsTitleLabel:;
- (void)setIndicateImageView:;
- (void)updateWithParameters:;
- (id)initWithParameters:;
- (void).cxx_destruct;
@end
