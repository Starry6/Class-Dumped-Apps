@interface IESLiveTeamFightScoreBar : UIView
@property (nonatomic) IESLiveTeamFightGameModel teamFightModel;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView leftIcon;
@property (nonatomic) UIImageView rightIcon;
@property (nonatomic) UIView leftNumView;
@property (nonatomic) UIView rightNumView;
@property (nonatomic) UILabel leftScoreLabel;
@property (nonatomic) UILabel rightScoreLabel;
@property (nonatomic) UILabel relativeScoreLabel;
@property (nonatomic) BOOL isShowRelativeScore;
@property (nonatomic) double ratio;
@property (nonatomic) q leftScore;
@property (nonatomic) q rightScore;
@property (nonatomic) q startTime;
@property (nonatomic) IESLiveTeamFightScoreBarBonusTimeView bonusView;
@property (nonatomic) q bonusTimeType;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) IESLiveAnimatedImageView expressionAnimationView;
@property (nonatomic) IESLiveAnimatedImageView redExpressionAnimationView;
@property (nonatomic) IESLiveAnimatedImageView blueExpressionAnimationView;
@property (nonatomic) double animateOffSetX;
@property (nonatomic) NSString currentAnimationResource;
@property (nonatomic) q teamFightType;
@property (nonatomic) double leftNumViewHeight;
@property (nonatomic) double leftNumViewY;
@property (nonatomic) BOOL isLeftTeamRewarding;
@property (nonatomic) IESLiveAnimatedImageView waveAnimatedView;
@property (nonatomic) UILabel leftTeamRewardScoreLabel;
@property (nonatomic) UILabel rightTeamRewardScoreLabel;
@property (nonatomic) @? didTapScoreBar;
- (id)rightScoreLabel;
- (void)setBlueExpressionAnimationView:;
- (void)setLeftNumView:;
- (void)addTeamExpression:;
- (double)animateOffSetX;
- (void)bindAction;
- (id)blueExpressionAnimationView;
- (long long)bonusTimeType;
- (id)bonusView;
- (void)calculateRatio;
- (id)currentAnimationResource;
- (void)didClickedLeftNumView;
- (void)didClickedRightNumView;
- (id)didTapScoreBar;
- (id)disposable;
- (void)endLeftTeamProfitEggRewardAnimation;
- (id)expressionAnimationView;
- (void)fitScoreLabelFrame;
- (id)initWithFrame:teamFightType:DIContext:teamFightModel:;
- (BOOL)isLeftTeamRewarding;
- (BOOL)isNeedShowRelativeScore:;
- (BOOL)isNeedShowScoreFuzzy;
- (BOOL)isShowRelativeScore;
- (id)leftNumView;
- (double)leftNumViewHeight;
- (double)leftNumViewY;
- (long long)leftScore;
- (id)leftScoreLabel;
- (id)leftTeamRewardScoreLabel;
- (id)redExpressionAnimationView;
- (id)relativeScoreAttributeText;
- (id)relativeScoreLabel;
- (void)removeTeamExpressionIfNeed;
- (id)rightNumView;
- (long long)rightScore;
- (id)rightTeamRewardScoreLabel;
- (void)setAnimateOffSetX:;
- (void)setBonusTimeType:;
- (void)setBonusView:;
- (void)setCurrentAnimationResource:;
- (void)setDidTapScoreBar:;
- (void)setDisposable:;
- (void)setExpressionAnimationView:;
- (void)setIsLeftTeamRewarding:;
- (void)setIsShowRelativeScore:;
- (void)setLeftIcon:;
- (void)setLeftNumViewHeight:;
- (void)setLeftNumViewY:;
- (void)setLeftScore:;
- (void)setLeftScoreLabel:;
- (void)setLeftTeamRewardScoreLabel:;
- (void)setRedExpressionAnimationView:;
- (void)setRelativeScoreLabel:;
- (void)setRightIcon:;
- (void)setRightNumView:;
- (void)setRightScore:;
- (void)setRightScoreLabel:;
- (void)setRightTeamRewardScoreLabel:;
- (void)setTeamFightModel:;
- (void)setTeamFightType:;
- (void)setUpTeamFightBonusTimeView;
- (void)setWaveAnimatedView:;
- (void)setupExpressionAnimation;
- (long long)showBonusTimeWithRedTeamInfo:blueTeamInfo:;
- (void)showWaveAnimationView;
- (void)startLeftTeamProfitEggRewardAnimation;
- (id)teamFightModel;
- (long long)teamFightType;
- (void)updateBonusInfoViewWithType:;
- (void)updateLeftTeamProfitEggRewardScore:;
- (void)updateLeftTeamRewardScoreLabelWithShowRelativeScore:;
- (void)updateRightTeamProfitEggRewardScore:;
- (void)updateScoreViewWithAnimation:;
- (id)waveAnimatedView;
- (id)contentView;
- (void)dealloc;
- (void)setStartTime:;
- (long long)startTime;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupViews;
- (double)ratio;
- (void)setRatio:;
- (id)leftIcon;
- (id)rightIcon;
@end
