@interface HTSLiveEffectiveActivityEmojiGroup : IESLivePBBaseMessage
@property (nonatomic) HTSLiveActivityEmojiGroup emojiGroup;
@property (nonatomic) BOOL hasEmojiGroup;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
+ (id)descriptor;
@end
