@interface AWEAliasAlertView : AWETextEditAlertView
@property (nonatomic) BOOL isQuickEdit;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)showOnView:;
- (void)clickConfirmBtn;
- (void)clickCancelBtn;
- (void)trackEventWithActionType:;
- (id)initWithFrame:isQuickEdit:userID:enterFrom:;
- (void)setIsQuickEdit:;
- (BOOL)isQuickEdit;
- (id)initWithFrame:isQuickEdit:userID:;
- (void)updateBaseViewHeightAfterSetSubtitleLabel;
- (void)setDefaultValue:;
- (id)userID;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)_setupUI;
+ (BOOL)isDisplaying;
@end
