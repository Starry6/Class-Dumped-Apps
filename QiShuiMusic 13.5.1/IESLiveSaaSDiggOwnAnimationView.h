@interface IESLiveSaaSDiggOwnAnimationView : UIView
@property (nonatomic) @? complete;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) BOOL useNewDiggAnim;
@property (nonatomic) BOOL useMediaRoomDiggAnim;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_singleDiggPath;
- (void)p_playIconImageViewTransFrom;
- (void)playWithEndPoint:completion:;
- (void)playWithMediaAnimationEndPoint:completion:;
- (void)playWithNewDiggAnimEndPoint:completion:;
- (void)setUseMediaRoomDiggAnim:;
- (void)setUseNewDiggAnim:;
- (BOOL)useMediaRoomDiggAnim;
- (BOOL)useNewDiggAnim;
- (id)complete;
- (id)endPoint;
- (void)setEndPoint:;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
- (void)setComplete:;
- (id)iconImageView;
- (void)setIconImageView:;
- (id)initWithFrame:image:;
@end
