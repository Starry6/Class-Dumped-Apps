@interface AWERelationFollowCleanAvatarContainer : UIView
@property (nonatomic) UIImageView firstAvatarImage;
@property (nonatomic) UIImageView secondAvatarImage;
@property (nonatomic) UIImageView singleAvatarImage;
@property (nonatomic) CAShapeLayer secondAvatarImageShapeLayer;
@property (nonatomic) CAShapeLayer secondAvatarImageBorderLayer;
- (id)singleAvatarImage;
- (id)secondAvatarImage;
- (id)firstAvatarImage;
- (double)userIconWidth;
- (double)smallUserIconWidth;
- (void)updateImage:userModel:imageSize:;
- (id)secondAvatarImageShapeLayer;
- (id)secondAvatarImageBorderLayer;
- (id)overlapPoint;
- (double)overlapRadius;
- (void)updateAvatar:;
- (void)setFirstAvatarImage:;
- (void)setSecondAvatarImage:;
- (void)setSingleAvatarImage:;
- (void)setSecondAvatarImageShapeLayer:;
- (void)setSecondAvatarImageBorderLayer:;
- (id)init;
- (void).cxx_destruct;
- (double)endAngle;
- (double)startAngle;
- (void)setupView;
+ (id)__defaultImage;
@end
