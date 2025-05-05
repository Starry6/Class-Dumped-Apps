@interface IESLiveLinkmicCustomizedRandomEmoji : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) q refreshTimestamp;
@property (nonatomic) HTSLiveImage emojiStatusImage;
@property (nonatomic) BOOL hasEmojiStatusImage;
@property (nonatomic) HTSLiveImage emojiDisplaydDynamicImage;
@property (nonatomic) BOOL hasEmojiDisplaydDynamicImage;
@property (nonatomic) q randomNum;
@property (nonatomic) q type;
@property (nonatomic) NSString triggerReason;
+ (id)descriptor;
@end
