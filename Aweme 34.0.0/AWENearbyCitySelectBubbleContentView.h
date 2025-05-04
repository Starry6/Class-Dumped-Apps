@interface AWENearbyCitySelectBubbleContentView : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UIButton cancelBtn;
@property (nonatomic) NSString title;
@property (nonatomic) @? confirmBlk;
@property (nonatomic) @? cancelBlk;
- (id)confirmBtn;
- (id)cancelBtn;
- (void)setConfirmBtn:;
- (void)setCancelBtn:;
- (id)initWithTitle:confirmBlk:cancelBlk:;
- (void)setConfirmBlk:;
- (void)setCancelBlk:;
- (id)confirmBlk;
- (id)cancelBlk;
- (id)icon;
- (void)cancel;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (void)setupUI;
- (void)confirm;
- (void)setupLayout;
@end
