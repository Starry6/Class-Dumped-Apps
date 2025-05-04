@interface AWEGCPCommentTabView : UIView
@property (nonatomic) <IESGCPLynxCardViewProtocol> lynxCardView;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) AWEGCPCommentTabViewModel viewModel;
@property (nonatomic) NSString schema;
@property (nonatomic) <AWEGCPCommentTabViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidPageUpdate;
- (id)initialData;
- (void)commentThemeChanged;
- (void)setLynxCardView:;
- (id)lynxCardView;
- (void)setupWithSchema:;
- (id)getProcessGestureWithView;
- (id)schema;
- (id)init;
- (void)setScrollView:;
- (void)setSchema:;
- (id)delegate;
- (id)viewModel;
- (id)scrollView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
