@interface AWESearchTextExtractionFooterView : UIView
@property (nonatomic) UIView backView;
@property (nonatomic) UIButton extractionButton;
@property (nonatomic) UIView disableBackView;
@property (nonatomic) UIButton tipsButton;
@property (nonatomic) BOOL canExtraction;
@property (nonatomic) @? extractBlock;
- (id)tipsButton;
- (void)setTipsButton:;
- (id)extractionButton;
- (void)setExtractionButton:;
- (id)disableBackView;
- (void)extractionButtonClick;
- (void)setCanExtraction:;
- (BOOL)canExtraction;
- (void)setExtractBlock:;
- (void)setDisableBackView:;
- (id)init;
- (id)backView;
- (void).cxx_destruct;
- (id)extractBlock;
- (void)setBackView:;
- (void)safeAreaInsetsDidChange;
- (void)setupUI;
@end
