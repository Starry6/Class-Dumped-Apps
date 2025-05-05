@interface HTSLiveFixedChatInfo_EmojiDetail : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) HTSLiveImage content;
@property (nonatomic) BOOL hasContent;
+ (id)descriptor;
@end
