@interface AWEUserLoginProtocolView : UIView
@property (nonatomic) AWEUserLoginProtocolModel model;
@property (nonatomic) DYUserProtocolView protocolView;
@property (nonatomic) AWEUserProtocolBubbleAdapter bubbleAdapter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)protocolView;
- (void)setProtocolView:;
- (id)bubbleAdapter;
- (void)showBubbleWithAdapter:;
- (void)clickBubbleWithAdapter:;
- (void)setBubbleAdapter:;
- (void)bindUI;
- (id)createDefaultProtocolView;
- (id)createBubbleAdapterWithProtocolView:;
- (void)protocolViewEnabledChanged:;
- (void)setModel:;
- (BOOL)pointInside:withEvent:;
- (id)initWithModel:;
- (id)model;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setupUI;
- (void)viewDidDisappear;
@end
