@interface AWESearchAIGCDeepSeekView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel alertLabel;
@property (nonatomic) UIImageView closeImageView;
@property (nonatomic) UIView bottomView;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)closeClick;
- (id)alertLabel;
- (void)setAlertLabel:;
- (void)updateDeepSeekSubViews;
- (id)deepseekViewDefaultAlertText;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bottomView;
- (void)setIconImageView:;
- (void)setBottomView:;
- (id)closeImageView;
- (void)setCloseImageView:;
- (void)createUI;
@end
