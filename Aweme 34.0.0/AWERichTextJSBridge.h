@interface AWERichTextJSBridge : IESPiper
@property (nonatomic) <AWERichTextJSBridgeDelegate> delegate;
@property (nonatomic) @? keyboardHeightBlock;
@property (nonatomic) @? toolBarHeightBlock;
@property (nonatomic) @? visualWebViewHeightBlock;
- (void)registerJSBridgeHandler;
- (id)keyboardHeightBlock;
- (id)toolBarHeightBlock;
- (id)visualWebViewHeightBlock;
- (void)editorChooseMention:;
- (void)editorFocusParagraphTextSize:;
- (void)editorShowToast:;
- (void)editorIsTextInput:;
- (void)setTextSizeChange:;
- (void)setKeyboardHeightBlock:;
- (void)setToolBarHeightBlock:;
- (void)setVisualWebViewHeightBlock:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
