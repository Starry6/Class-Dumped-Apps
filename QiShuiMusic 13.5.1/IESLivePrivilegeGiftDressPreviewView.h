@interface IESLivePrivilegeGiftDressPreviewView : IESLivePrivilegeDressPreviewBaseView
@property (nonatomic) UIView<IESLiveGiftTrayOuterViewProtocol> previewView;
- (id)initWithPreviewModel:DIContext:;
- (id)previewView;
- (void)layoutSubviews;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setPreviewView:;
- (void)setupUI;
@end
