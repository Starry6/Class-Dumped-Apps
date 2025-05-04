@interface AWECommentSwiftModel.CommentPanelInputViewConfigurationTemplate : NSObject
@property (nonatomic) BOOL disableInputView;
@property (nonatomic) <AWECommentInputViewConfigurationProtocol> inputConfig;
- (BOOL)disableInputView;
- (id)inputConfig;
- (void)setInputConfig:;
- (void)setDisableInputView:;
- (id)init;
- (void).cxx_destruct;
@end
