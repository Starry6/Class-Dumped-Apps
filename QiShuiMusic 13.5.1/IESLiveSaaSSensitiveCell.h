@interface IESLiveSaaSSensitiveCell : UICollectionViewCell
@property (nonatomic) BOOL enableAdminOptmize;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIButton delButton;
@property (nonatomic) UIView backView;
@property (nonatomic) IESLiveInnerPbWord dataWord;
@property (nonatomic) NSString message;
@property (nonatomic) NSString prompts;
- (id)dataWord;
- (id)delButton;
- (BOOL)enableAdminOptmize;
- (void)setDataWord:;
- (void)setDelButton:;
- (void)setEnableAdminOptmize:;
- (void)setTagLabel:;
- (id)tagLabel;
- (void)updateBackViewLayer;
- (void)setMessage:;
- (void)layoutSubviews;
- (id)backView;
- (void)setBackView:;
- (id)initWithFrame:;
- (id)message;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;
- (id)prompts;
- (void)setPrompts:;
@end
