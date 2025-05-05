@interface IESLiveFantasticGiftComboCountView : UIView
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UILabel dormantLabel;
@property (nonatomic) UILabel crypticLabel;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) q currentCount;
- (id)crypticLabel;
- (id)dormantLabel;
- (void)hideBackground;
- (void)setCrypticLabel:;
- (void)setDormantLabel:;
- (long long)currentCount;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)initWithCount:;
- (void)setupUI;
- (id)countLabel;
- (void)setCountLabel:;
- (void)setCurrentCount:;
- (void)increase;
@end
