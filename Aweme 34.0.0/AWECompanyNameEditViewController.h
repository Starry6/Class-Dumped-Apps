@interface AWECompanyNameEditViewController : AWEProfileEditTextViewController
@property (nonatomic) UIView headerView;
@property (nonatomic) UILabel uploadTipLabel;
@property (nonatomic) UITextView detailDescriptionTextView;
@property (nonatomic) UITapGestureRecognizer wholeTapGesture;
@property (nonatomic) AWEFeature<AWEEnterpriseCompanyNameEditProtocol> companyNameEditFeature;
@property (nonatomic) DUXSwitch showProofSwitch;
@property (nonatomic) AWECompanyAuditInfoResponseModel auditInfoModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldSaveChange:;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (unsigned long long)textEditStyle;
- (id)detailDescriptionTextView;
- (void)p_setupCompanyPickImageView;
- (void)setDetailDescriptionTextView:;
- (void)checkShouldSaveStatus;
- (id)showProofSwitch;
- (void)setCompanyNameEditFeature:;
- (void)p_updateText;
- (void)asyncRequsetAuditInfoWithType:completion:;
- (void)setupBusinessVerifyInfoSaveButton;
- (void)tapSelfView;
- (void)setWholeTapGesture:;
- (id)wholeTapGesture;
- (BOOL)shouldForbidModify;
- (void)setAuditInfoModel:;
- (id)uploadTipLabel;
- (id)companyNameEditFeature;
- (id)auditInfoModel;
- (id)defaultTextWithType:;
- (long long)sceneWithType:;
- (unsigned long long)initializeTextEditStyle;
- (void)updateCompanyNickNameTipsIfNeeded;
- (void)setUploadTipLabel:;
- (void)setShowProofSwitch:;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (void)keyboardDidShow;
- (id)headerView;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setHeaderView:;
- (void)keyboardDidHide;
@end
