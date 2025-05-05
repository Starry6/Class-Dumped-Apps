@interface AWEAliasAlertView : AWETextEditAlertView
@property (nonatomic) BOOL isQuickEdit;
@property (nonatomic) NSString userID;
- (void)clickCancelBtn:;
- (void)setIsQuickEdit:;
- (void)clickConfirmBtn:;
- (id)initWithFrame:isQuickEdit:userID:;
- (BOOL)isQuickEdit;
- (void)showOnView:;
- (void)trackEventWithActionType:;
- (id)userID;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)_setupUI;
@end
