@interface HTSLiveSaaSDiggView : UIImageView
@property (nonatomic) CAShapeLayer borderLayer;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView avatorImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatorImageView;
- (id)initWithFrame:ownDigg:iconImage:avatorImage:;
- (id)initWithFrame:ownDigg:iconImage:avatorImage:newDiggStrategy:showSwitch:;
- (void)playAvatorIconChangeAnima;
- (void)playAvatorIconChangeAnimaWithNewStrategy;
- (void)setAvatorImageView:;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:;
- (id)borderLayer;
- (void)setBorderLayer:;
@end
