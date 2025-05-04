@interface AWESearchCommentInputViewConfiguration : NSObject
@property (nonatomic) <AWECommentInputViewTextConfigurationProtocol> textConfig;
@property (nonatomic) <AWECommentInputViewElementConfigurationProtocol> elementConfig;
@property (nonatomic) <AWECommentInputViewMiniEmojiConfigurationProtocol> miniEmojiConfig;
@property (nonatomic) <AWECommentInputViewMediaPickerConfigurationProtocol> mediaPickerConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mediaPickerConfig;
- (id)textConfig;
- (void)setTextConfig:;
- (id)elementConfig;
- (void)setElementConfig:;
- (id)miniEmojiConfig;
- (void)setMiniEmojiConfig:;
- (void)setMediaPickerConfig:;
- (void).cxx_destruct;
@end
