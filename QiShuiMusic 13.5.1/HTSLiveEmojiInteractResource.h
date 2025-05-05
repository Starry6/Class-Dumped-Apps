@interface HTSLiveEmojiInteractResource : IESLivePBBaseMessage
@property (nonatomic) HTSLiveSendInteractEmojiConfig fromImage;
@property (nonatomic) BOOL hasFromImage;
@property (nonatomic) HTSLiveSendInteractEmojiConfig passImage;
@property (nonatomic) BOOL hasPassImage;
@property (nonatomic) HTSLiveSendInteractEmojiConfig toImage;
@property (nonatomic) BOOL hasToImage;
+ (id)descriptor;
@end
