@interface IESLiveInteractionGuestEmojiContainer : UIView
@property (nonatomic) UIView emojiBgMask;
@property (nonatomic) {CGSize=dd} emojiMaskSize;
@property (nonatomic) BOOL emojiMaskHidden;
@property (nonatomic) @? shouldFilterEmojiBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emojiAvatarSize;
- (BOOL)emojiMaskHidden;
- (void)setEmojiBgMask:;
- (void)containerWillDismissEmoji;
- (void)containerWillShowEmoji;
- (id)emojiBgMask;
- (id)emojiMaskSize;
- (void)setEmojiMaskHidden:;
- (void)setEmojiMaskSize:;
- (void)setShouldFilterEmojiBlock:;
- (BOOL)shouldFilterEmoji;
- (id)shouldFilterEmojiBlock;
- (void).cxx_destruct;
@end
