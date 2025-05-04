@interface AWEKnowledgeRichContentImpl.LynxContentView : UIView
@property (nonatomic) UIView<HunterContainerProtocol> containerView;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
