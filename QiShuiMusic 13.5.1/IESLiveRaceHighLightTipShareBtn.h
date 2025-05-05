@interface IESLiveRaceHighLightTipShareBtn : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel title;
@property (nonatomic) UIImageView tipArrow;
@property (nonatomic) @? action;
- (void)setTipArrow:;
- (id)initWithAction:;
- (id)backgroundView;
- (id)action;
- (void)setTitle:;
- (void)setAction:;
- (id)title;
- (void)setup;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (void)tapped;
- (id)tipArrow;
@end
