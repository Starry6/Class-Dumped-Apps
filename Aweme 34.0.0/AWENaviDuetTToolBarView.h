@interface AWENaviDuetTToolBarView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton completeButton;
@property (nonatomic) @? onCloseBlock;
@property (nonatomic) @? onCompleteBlock;
- (void)setOnCloseBlock:;
- (id)completeButton;
- (void)touchUpInsideClose:;
- (void)touchUpInsideComplete:;
- (void)setCompleteButton:;
- (void)setOnCompleteBlock:;
- (id)onCloseBlock;
- (id)onCompleteBlock;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupSubviews;
- (void)setCloseButton:;
- (id)closeButton;
@end
