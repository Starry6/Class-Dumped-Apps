@interface AWECommentInputViewSwiftImpl.CustomInputViewDefaultSubConfig : NSObject
@property (nonatomic) <AWECommentEvaluationInputViewTitleElementConfigurationProtocol> evaluationTitleConfig;
@property (nonatomic) <AWECommentEvaluationInputViewRatingElementConfigurationProtocol> evaluationRatingConfig;
@property (nonatomic) <AWECommentEvaluationInputViewExpandElementConfigurationProtocol> evaluationExpandConfig;
@property (nonatomic) <AWECommentEvaluationInputViewImagePreviewElementConfigurationProtocol> imagePreviewConfig;
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
- (id)evaluationTitleConfig;
- (void)setEvaluationTitleConfig:;
- (id)evaluationRatingConfig;
- (void)setEvaluationRatingConfig:;
- (id)evaluationExpandConfig;
- (void)setEvaluationExpandConfig:;
- (id)imagePreviewConfig;
- (void)setImagePreviewConfig:;
- (id)init;
- (void).cxx_destruct;
@end
