@interface AWECommentInputViewSwiftImpl.CommentInputViewDanmakuSubConfig : NSObject
@property (nonatomic) <AWECommentInputViewTextConfigurationProtocol> textConfig;
@property (nonatomic) <AWECommentInputViewElementConfigurationProtocol> elementConfig;
@property (nonatomic) <AWECommentInputViewMiniEmojiConfigurationProtocol> miniEmojiConfig;
@property (nonatomic) <AWECommentInputViewMediaPickerConfigurationProtocol> mediaPickerConfig;
- (id)mediaPickerConfig;
- (id)textConfig;
- (void)setTextConfig:;
- (id)elementConfig;
- (void)setElementConfig:;
- (id)miniEmojiConfig;
- (void)setMiniEmojiConfig:;
- (void)setMediaPickerConfig:;
- (id)init;
- (void).cxx_destruct;
@end
