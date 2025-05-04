@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPreProcessAndRequestrModel : NSObject
@property (nonatomic) <AWECommentViewControllerPreloadProtocol> preload;
@property (nonatomic) <AWECommentViewControllerPreRenderProtocol> preRender;
@property (nonatomic) <AWECommentViewControllerRequestProtocol> request;
- (id)preRender;
- (void)setPreRender:;
- (id)init;
- (id)preload;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
- (void)setPreload:;
@end
