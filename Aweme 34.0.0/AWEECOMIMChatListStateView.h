@interface AWEECOMIMChatListStateView : UIView
@property (nonatomic) UIImageView stateImageView;
@property (nonatomic) UILabel stateTitleLabel;
@property (nonatomic) UILabel stateLabel;
@property (nonatomic) UIButton retryBtn;
@property (nonatomic) AWEECOMIMPageTrackUtil pageTrackUtil;
@property (nonatomic) @? retryAction;
@property (nonatomic) BOOL ignoreUIThemeStyle;
- (id)retryBtn;
- (void)setRetryBtn:;
- (void)updateStateViewWithType:;
- (id)pageTrackUtil;
- (void)setPageTrackUtil:;
- (void)retryBtnClick;
- (id)stateImageView;
- (id)stateTitleLabel;
- (BOOL)ignoreUIThemeStyle;
- (void)setIgnoreUIThemeStyle:;
- (void)setStateImageView:;
- (void)setStateTitleLabel:;
- (id)initWithFrame:;
- (id)retryAction;
- (BOOL)isDarkTheme;
- (void).cxx_destruct;
- (void)setRetryAction:;
- (void)setStateLabel:;
- (id)stateLabel;
@end
