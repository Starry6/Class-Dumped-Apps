@interface AWEFeedConcernPOIGoodsCardTip : NSObject
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIButton unscribeButton;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIView parentView;
@property (nonatomic) DUXBottomNotification tipsShowedButton;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)initWithAwemeModel:parentView:;
- (id)createBottomNotification;
- (void)setTipsShowedButton:;
- (id)tipsShowedButton;
- (id)unscribeButton;
- (void)setUnscribeButton:;
- (id)show;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)parentView;
- (void)setIconImageView:;
- (void)setParentView:;
+ (BOOL)getFollowGoodsCardFirstSeenStatus;
+ (id)showWithAwemeModel:inParentView:;
@end
