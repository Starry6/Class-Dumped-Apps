@interface AWEConcernCellLastView : UIView
@property (nonatomic) UILabel messageLabel;
@property (nonatomic) AWEButton backToHotFeedButton;
@property (nonatomic) UILabel scrollTipsLabel;
@property (nonatomic) @? singleClickBlock;
- (id)backToHotFeedButton;
- (id)scrollTipsLabel;
- (void)onLastViewSingleClick;
- (void)onBackToHotFeedButtonClick;
- (void)adjustTitleAndImage:;
- (id)singleClickBlock;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)bindWithModel:;
- (void)setSingleClickBlock:;
- (void)setBackToHotFeedButton:;
- (void)setScrollTipsLabel:;
- (id)messageLabel;
- (id)initWithFrame:;
- (void)setMessageLabel:;
- (void).cxx_destruct;
- (void)setupUI;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
