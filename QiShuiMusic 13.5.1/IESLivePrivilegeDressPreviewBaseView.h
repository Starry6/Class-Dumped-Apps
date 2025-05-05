@interface IESLivePrivilegeDressPreviewBaseView : UIView
@property (nonatomic) UIButton previewButton;
@property (nonatomic) @? previewButtonTapBlock;
@property (nonatomic) IESLivePrivilegeDressPreviewModel previewModel;
@property (nonatomic) @? removeBlock;
- (id)initWithPreviewModel:DIContext:;
- (void)setRemoveBlock:;
- (void)previewButtonClick:;
- (id)previewButtonTapBlock;
- (id)previewModel;
- (id)removeBlock;
- (void)setPreviewButton:;
- (void)setPreviewButtonTapBlock:;
- (void)setPreviewModel:;
- (void)setupPreviewButton;
- (void)removeFromSuperview;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)previewButton;
@end
