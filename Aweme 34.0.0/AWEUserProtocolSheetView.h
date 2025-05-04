@interface AWEUserProtocolSheetView : UIView
@property (nonatomic) AWEUserProtocolPopViewModel model;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEUserAttributedLabelView subtitleLabel;
@property (nonatomic) DUXButton agreeBtn;
@property (nonatomic) UILabel disagreeBtn;
@property (nonatomic) @? callBack;
- (void)updateByModel:;
- (void)setCallBack:;
- (id)agreeBtn;
- (void)setAgreeBtn:;
- (void)trackClickWithAction:;
- (id)disagreeBtn;
- (void)agreeBtnClicked;
- (void)disagreeBtnClicked;
- (void)setDisagreeBtn:;
- (void)setModel:;
- (id)initWithModel:;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setupUI;
- (id)callBack;
@end
