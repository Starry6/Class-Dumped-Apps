@interface HTSLiveEmojiTabInfo : IESLivePBBaseMessage
@property (nonatomic) NSString describe;
@property (nonatomic) BOOL btnShow;
@property (nonatomic) NSString btnText;
@property (nonatomic) NSString btnSchema;
@property (nonatomic) NSString emojiIconSelectURL;
@property (nonatomic) NSString emojiIconUnselectURL;
@property (nonatomic) NSString emojiTabName;
+ (id)descriptor;
@end
