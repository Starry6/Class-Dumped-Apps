@interface IESLiveInteractionEmojiGuestView : UIView
@property (nonatomic) IESLiveAnimatedImageView emojiView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emojiView;
- (void)loadEmojiWithFilePath:;
- (void)loadEmojiWithURLs:;
- (void)loadSubView;
- (void)setEmojiView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)stopAnimation;
@end
