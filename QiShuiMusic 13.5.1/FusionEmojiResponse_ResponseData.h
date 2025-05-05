@interface FusionEmojiResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveFusionEmoji emoji;
@property (nonatomic) BOOL hasEmoji;
+ (id)descriptor;
@end
