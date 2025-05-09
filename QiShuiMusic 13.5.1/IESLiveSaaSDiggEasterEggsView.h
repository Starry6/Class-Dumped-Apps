@interface IESLiveSaaSDiggEasterEggsView : UIView
@property (nonatomic) UIImageView leftHeartImageView;
@property (nonatomic) UIImageView progressBackImageView;
@property (nonatomic) CAGradientLayer progressFontLayer;
@property (nonatomic) UILabel textLable;
@property (nonatomic) q processDiggCount;
@property (nonatomic) double maxDiggCount;
@property (nonatomic) double startDiggCount;
@property (nonatomic) q explosionDiggCount;
@property (nonatomic) BOOL isFirstExplosion;
@property (nonatomic) BOOL startPlaying;
@property (nonatomic) BOOL exlosionAnimaPlaying;
@property (nonatomic) @? endComplete;
@property (nonatomic) UIView textLableMaskView;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isBig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEndComplete:;
- (void)createTextLabel;
- (id)createTextGraientImageWithBound:;
- (void)doEndAnimationWithComplete:;
- (void)doFirstExplosionAnimation;
- (id)endComplete;
- (BOOL)exlosionAnimaPlaying;
- (long long)explosionDiggCount;
- (id)initWithCount:easterEggsStartThreshold:processFullThreshold:isAnchor:;
- (BOOL)isBig;
- (BOOL)isFirstExplosion;
- (id)leftHeartImageView;
- (double)maxDiggCount;
- (void)p_playExlpsionLottieAnimaWithFilePath:;
- (void)playFloatingAnimation;
- (void)playStartAnimation;
- (long long)processDiggCount;
- (id)progressBackImageView;
- (id)progressFontLayer;
- (BOOL)refreshExplosion;
- (void)refreshProgressCount:;
- (void)setExlosionAnimaPlaying:;
- (void)setExplosionDiggCount:;
- (void)setIsAnchor:;
- (void)setIsBig:;
- (void)setIsFirstExplosion:;
- (void)setLeftHeartImageView:;
- (void)setMaxDiggCount:;
- (void)setProcessDiggCount:;
- (void)setProgressBackImageView:;
- (void)setProgressFontLayer:;
- (void)setStartDiggCount:;
- (void)setTextLable:;
- (void)setTextLableMaskView:;
- (double)startDiggCount;
- (id)textLable;
- (id)textLableMaskView;
- (void)dealloc;
- (void)animationDidStop:finished:;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (BOOL)startPlaying;
- (void)setStartPlaying:;
@end
