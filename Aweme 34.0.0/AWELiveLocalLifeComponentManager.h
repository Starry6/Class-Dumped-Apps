@interface AWELiveLocalLifeComponentManager : NSObject
@property (nonatomic) UIView motionEntranceContainerView;
@property (nonatomic) BDImageView motionEntranceImageView;
@property (nonatomic) BDImageView expoundCardComboImageView;
@property (nonatomic) BDImage comboCardFlyOutWebp;
@property (nonatomic) BDImage comboCardFlyInWebp;
@property (nonatomic) AWEURLModel liveRoomEntranceIconModel;
@property (nonatomic) BOOL hasConfigIcon;
@property (nonatomic) q animationStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)motionEntranceContainerView;
- (id)motionEntranceImageView;
- (id)motionEntranceView;
- (void)startMotionAnimationIfNeeded;
- (void)setMotionEntranceContainerView:;
- (void)setMotionEntranceImageView:;
- (void)setAnimationStatus:;
- (long long)animationStatus;
- (id)currentIconModel;
- (void)updateIconAnimationModel:;
- (void)startMotionAnimation_animationTest;
- (void)configIconModel:;
- (void)setLiveRoomEntranceIconModel:;
- (BOOL)isFixIconOccupancy;
- (void)configEntranceMotionImageViewIfNeededWithFixIconOccupancy;
- (void)configEntranceMotionImageViewIfNeeded;
- (void)setHasConfigIcon:;
- (id)liveRoomEntranceIconModel;
- (void)removeExpoundCardComboAimatedCompletion:;
- (id)expoundCardComboImageView;
- (id)comboCardFlyOutWebp;
- (id)comboCardFlyInWebp;
- (BOOL)hasConfigIcon;
- (long long)comboAnimationStatus;
- (void)startExpoundCardComboAimatedWithType:completion:;
- (void)restartPlayMotionAnimation;
- (BOOL)p_isWebpImage:;
- (BOOL)p_couldDoComboAnimat;
- (void)setExpoundCardComboImageView:;
- (void)setComboCardFlyOutWebp:;
- (void)setComboCardFlyInWebp:;
- (BOOL)isAnimating;
- (void).cxx_destruct;
@end
