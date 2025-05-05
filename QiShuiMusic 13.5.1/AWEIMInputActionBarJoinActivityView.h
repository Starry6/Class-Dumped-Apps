@interface AWEIMInputActionBarJoinActivityView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton joinButton;
@property (nonatomic) AWEIMInputActionBarJoinActivity activity;
@property (nonatomic) <AWEIMInputActionBarJoinActivityViewDelegate> delegate;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didCickToJoin;
- (BOOL)isLightStyle;
- (void)p_refreshUIStyle;
- (void)p_setupUI;
- (void)setIsLightStyle:;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setActivity:;
- (void)setIconView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)activity;
- (id)delegate;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)joinButton;
- (void)setJoinButton:;
@end
