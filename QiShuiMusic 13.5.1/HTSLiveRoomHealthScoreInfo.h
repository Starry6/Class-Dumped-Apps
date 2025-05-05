@interface HTSLiveRoomHealthScoreInfo : IESLivePBBaseMessage
@property (nonatomic) double score;
@property (nonatomic) NSString bubbleMessage;
@property (nonatomic) NSString jumpURL;
+ (id)descriptor;
@end
