@interface HTSLivePicoDisplayInfo : IESLivePBBaseMessage
@property (nonatomic) q comboSumCount;
@property (nonatomic) NSString emoji;
@property (nonatomic) HTSLiveImage emojiIcon;
@property (nonatomic) BOOL hasEmojiIcon;
@property (nonatomic) NSString emojiText;
+ (id)descriptor;
@end
