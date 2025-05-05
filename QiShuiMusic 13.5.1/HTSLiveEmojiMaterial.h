@interface HTSLiveEmojiMaterial : IESLivePBBaseMessage
@property (nonatomic) NSString emoji;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString text;
@property (nonatomic) q emojiId;
@property (nonatomic) HTSLiveImage effectIcon;
@property (nonatomic) BOOL hasEffectIcon;
+ (id)descriptor;
@end
