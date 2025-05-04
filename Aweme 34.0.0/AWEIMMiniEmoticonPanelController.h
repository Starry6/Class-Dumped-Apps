@interface AWEIMMiniEmoticonPanelController : NSObject
@property (nonatomic) UIView<AWECommentMiniEmoticonPanelViewProtocol> panelView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESIMMiniEmoticonPanelDelegate> delegate;
- (void)resetEmoticonOrder;
- (void)miniEmoticonPanelView:didSelectEmoticon:;
- (id)panelView;
- (void)setPanelView:;
- (id)emoticonPanelView;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
