@interface AWECommentPanelInputViewConfigModel : NSObject
@property (nonatomic) BOOL disableInputView;
@property (nonatomic) AWECommentInputViewTextConfigTemplateModel textConfigModel;
@property (nonatomic) AWECommentInputViewElementConfigTemplateModel elementConfigModel;
@property (nonatomic) AWECommentInputViewMiniEmojiConfigTemplateModel miniEmojiConfigModel;
@property (nonatomic) AWECommentInputViewMediaPickerConfigTemplateModel mediaPickerConfigModel;
- (BOOL)disableInputView;
- (id)textConfigModel;
- (id)elementConfigModel;
- (id)miniEmojiConfigModel;
- (id)mediaPickerConfigModel;
- (void)setDisableInputView:;
- (id)initWithIsDisableInputView:;
- (void)setTextConfigModel:;
- (void)setElementConfigModel:;
- (void)setMiniEmojiConfigModel:;
- (void)setMediaPickerConfigModel:;
- (void).cxx_destruct;
@end
