@interface AWECommentPanelContainerSwiftImpl.CommentPanelViewControllerSettingModel : NSObject
@property (nonatomic) <AWECommentViewControllerPanelContainerSettingProtocol> panelContainer;
@property (nonatomic) <AWECommentViewControllerTabSettingProtocol> tab;
@property (nonatomic) <AWECommentViewControllerInputViewSettingProtocol> input;
@property (nonatomic) <AWECommentViewControllerContentSettingProtocol> coreContent;
@property (nonatomic) <AWECommentListViewControllerMediaSettingProtocol> media;
- (id)coreContent;
- (id)panelContainer;
- (void)setTab:;
- (void)setPanelContainer:;
- (void)setCoreContent:;
- (id)init;
- (void)setInput:;
- (id)input;
- (void).cxx_destruct;
- (id)media;
- (void)setMedia:;
- (id)tab;
@end
