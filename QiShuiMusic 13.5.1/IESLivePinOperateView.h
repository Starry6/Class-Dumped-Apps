@interface IESLivePinOperateView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton cancelBtn;
@property (nonatomic) NSAttributedString attrText;
@property (nonatomic) BOOL btnAvailable;
@property (nonatomic) @? cancelDidClick;
- (void)cancelBtnClick:;
- (id)attrText;
- (BOOL)btnAvailable;
- (id)cancelBtn;
- (id)cancelDidClick;
- (id)initWithAttributedText:btnAvailable:;
- (void)setAttrText:;
- (void)setBtnAvailable:;
- (void)setCancelBtn:;
- (void)setCancelDidClick:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
@end
