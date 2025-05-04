@interface AWEShareAIGCTokenCardView : AWEShareReflowBaseView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel title;
@property (nonatomic) @? reportBlock;
@property (nonatomic) @? openBlock;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)openAction;
- (void)setReportBlock:;
- (void)reportAction;
- (id)reportBlock;
- (void)setOpenBlock:;
- (id)openBlock;
- (id)initWithFrame:;
- (id)containerView;
- (void)dismiss;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)title;
- (void)closeAction;
- (void)setImageView:;
- (void)setTitle:;
- (id)imageView;
- (void)setupSubviews;
- (void)updateModel:;
@end
