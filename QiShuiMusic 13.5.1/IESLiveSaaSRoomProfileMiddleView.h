@interface IESLiveSaaSRoomProfileMiddleView : UIView
@property (nonatomic) UIView topViewContainer;
@property (nonatomic) UILabel topLabel;
@property (nonatomic) IESLiveSaaSRoomProfileRoomInfoView bottomView;
@property (nonatomic) IESLiveSaaSRoomProfileStore store;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel diggCountLabel;
@property (nonatomic) UILabel fireCountLabel;
@property (nonatomic) UILabel totalUserCountLabel;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double currentWidth;
@property (nonatomic) NSNumber bottomViewAlpha;
- (id)bottomViewAlpha;
- (void)clearAnimation;
- (void)didSetAttachingDIContext;
- (id)diggCountLabel;
- (id)fireCountLabel;
- (id)initWithRoomProfileStore:;
- (void)p_addObserver;
- (void)p_doDiggAndEarnOverTurnAnimation;
- (double)p_nameWidthWithStr:;
- (void)p_setUpUI;
- (BOOL)p_shouldDoDiggAndEarnOverTurnAnimation;
- (BOOL)p_shouldShowBottomView;
- (void)setBottomViewAlpha:;
- (void)setDiggCountLabel:;
- (void)setFireCountLabel:;
- (void)setTopViewContainer:;
- (void)setTotalUserCountLabel:;
- (id)topViewContainer;
- (id)totalUserCountLabel;
- (void)dealloc;
- (void)setStore:;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (id)store;
- (id)nameLabel;
- (id)bottomView;
- (void)setNameLabel:;
- (void)setBottomView:;
- (id)topLabel;
- (void)setTopLabel:;
- (void)updateAnimation;
- (double)currentWidth;
@end
