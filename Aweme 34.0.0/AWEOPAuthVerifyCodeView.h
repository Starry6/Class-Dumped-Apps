@interface AWEOPAuthVerifyCodeView : AWEOPBasePopupView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView textBgView;
@property (nonatomic) UITextField codetextField;
@property (nonatomic) UIButton sendButton;
@property (nonatomic) UILabel resultTipLabel;
@property (nonatomic) UIButton okButton;
@property (nonatomic) UITapGestureRecognizer customTapRecognizer;
@property (nonatomic) NSTimer reSendTimer;
@property (nonatomic) NSString currentCodeText;
@property (nonatomic) NSMutableSet trackedEvents;
@property (nonatomic) NSString mobileString;
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSDictionary extraInfoDict;
@property (nonatomic) @? onClickOKBlock;
@property (nonatomic) @? onFinishVerifyBlock;
@property (nonatomic) @? onTrackBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (void)stopCountDown;
- (void)addNotifications;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (id)trackedEvents;
- (void)setTrackedEvents:;
- (void)showSuccess;
- (void)onClickCloseButton:;
- (void)onClickOKButton:;
- (id)textBgView;
- (id)codetextField;
- (id)resultTipLabel;
- (void)addCustomBackgroundTapAction;
- (id)onTrackBlock;
- (void)onTapBaseBackgroundView;
- (void)onClickSendButton:;
- (id)onFinishVerifyBlock;
- (void)showOrHideRotateAnimation:;
- (void)showErrorWithText:;
- (id)customTapRecognizer;
- (void)setCustomTapRecognizer:;
- (id)onClickOKBlock;
- (void)handleResultWithError:completion:;
- (id)mobileString;
- (void)beginCountDown:;
- (id)currentCodeText;
- (void)setCurrentCodeText:;
- (void)setReSendTimer:;
- (id)reSendTimer;
- (void)onClickEndEditingButton:;
- (void)setupPopupSubviews;
- (void)sendSMS;
- (void)closeViewFromAPI;
- (void)setMobileString:;
- (void)setCodetextField:;
- (void)setOnClickOKBlock:;
- (void)setOnFinishVerifyBlock:;
- (void)setOnTrackBlock:;
- (void)setTextBgView:;
- (void)setResultTipLabel:;
- (void)keyboardWillHide:;
- (void)dealloc;
- (id)clientKey;
- (void)dismissKeyboard;
- (void)setClientKey:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)keyboardWillShow:;
- (void)setOkButton:;
- (id)okButton;
- (void)showInView:;
- (void)textFieldDidChange:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)sendButton;
- (void)setSendButton:;
@end
