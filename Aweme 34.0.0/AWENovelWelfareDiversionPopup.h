@interface AWENovelWelfareDiversionPopup : AWEHalfScreenBaseViewController
@property (nonatomic) AWENovelWelfareDiversionPopupModel model;
@property (nonatomic) UIImageView headerView;
@property (nonatomic) UIImageView bookView;
@property (nonatomic) UIImageView bookBackgroundView;
@property (nonatomic) UIImageView scoreMaskView;
@property (nonatomic) UILabel scoreTextLabel;
@property (nonatomic) UILabel mainTitle;
@property (nonatomic) UILabel subTitle;
@property (nonatomic) DUXCheckBox checkbox;
@property (nonatomic) UILabel checkboxLabel;
@property (nonatomic) DUXAbandonedButton openButton;
@property (nonatomic) DUXAbandonedButton stayButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <AWENovelWelfareDiversionPopupDelegate> delegate;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (void)closeButtonClicked;
- (void)setBookView:;
- (id)bookView;
- (void)slideDismiss;
- (void)tapDismiss;
- (double)subtitleHeight;
- (id)bookBackgroundView;
- (id)scoreMaskView;
- (id)scoreTextLabel;
- (id)checkbox;
- (id)checkboxLabel;
- (id)stayButton;
- (void)trackClickWithClickedContent:buttonName:;
- (void)closeActionWithClickedContent:buttonName:;
- (void)tapCheckboxLabel;
- (void)openButtonClicked;
- (void)stayButtonClicked;
- (void)setBookBackgroundView:;
- (void)setScoreMaskView:;
- (void)setScoreTextLabel:;
- (void)setCheckbox:;
- (void)setCheckboxLabel:;
- (void)setStayButton:;
- (void)setModel:;
- (id)delegate;
- (id)initWithModel:;
- (void)viewDidLoad;
- (void)setSubTitle:;
- (id)subTitle;
- (id)headerView;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setHeaderView:;
- (void)setupUI;
- (double)viewHeight;
- (void)setCloseButton:;
- (id)closeButton;
- (id)openButton;
- (void)setOpenButton:;
- (id)mainTitle;
- (void)setMainTitle:;
+ (BOOL)isDarkMode;
@end
