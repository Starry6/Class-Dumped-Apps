@interface HTSLivePKContributeItemView : UIView
@property (nonatomic) UIImageView centerImageView;
@property (nonatomic) IESLiveGradientView avatarImageBackView;
@property (nonatomic) UIImageView mvpImageView;
@property (nonatomic) UIImageView indexImageview;
@property (nonatomic) BOOL isRightIncrease;
@property (nonatomic) HTSLivePKContributeItem item;
@property (nonatomic) <IESLiveSettings> settings;
- (BOOL)isRightIncrease;
- (id)avatarImageBackView;
- (id)indexImageview;
- (id)initWithRightIncrease:;
- (id)mvpImageView;
- (void)setAvatarImageBackView:;
- (void)setIndexImageview:;
- (void)setIsRightIncrease:;
- (void)setMvpImageView:;
- (void)updateWin:;
- (void)updateWithItem:roomId:;
- (id)item;
- (id)settings;
- (void)setSettings:;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)centerImageView;
- (void)setCenterImageView:;
@end
