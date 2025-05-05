@interface IESLiveLinkMicAudienceListEmojisResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray emojiArray;
@property (nonatomic) Q emojiArray_Count;
@property (nonatomic) q millisecondLevelTimeControl;
@property (nonatomic) NSString timeControlText;
+ (id)descriptor;
@end
