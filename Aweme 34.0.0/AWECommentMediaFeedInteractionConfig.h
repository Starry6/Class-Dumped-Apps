@interface AWECommentMediaFeedInteractionConfig : NSObject
@property (nonatomic) BOOL disablePublishImage;
@property (nonatomic) BOOL disableTextContent;
@property (nonatomic) BOOL disableCommentLike;
@property (nonatomic) BOOL disableInputView;
@property (nonatomic) BOOL disableLongPressPanel;
- (BOOL)disableLongPressPanel;
- (BOOL)disableCommentLike;
- (BOOL)disableTextContent;
- (BOOL)disablePublishImage;
- (BOOL)disableInputView;
- (void)setDisableCommentLike:;
- (void)setDisableInputView:;
- (void)setDisableTextContent:;
- (void)setDisablePublishImage:;
- (void)setDisableLongPressPanel:;
@end
