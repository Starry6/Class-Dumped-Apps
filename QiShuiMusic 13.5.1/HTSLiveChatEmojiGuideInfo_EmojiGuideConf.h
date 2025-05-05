@interface HTSLiveChatEmojiGuideInfo_EmojiGuideConf : IESLivePBBaseMessage
@property (nonatomic) NSString emoji;
@property (nonatomic) NSMutableArray triggerWordsArray;
@property (nonatomic) Q triggerWordsArray_Count;
@property (nonatomic) q beginTime;
@property (nonatomic) q endTime;
+ (id)descriptor;
@end
