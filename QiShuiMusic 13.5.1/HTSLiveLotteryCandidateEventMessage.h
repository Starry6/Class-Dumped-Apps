@interface HTSLiveLotteryCandidateEventMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q lotteryId;
@property (nonatomic) NSString userOpenid;
+ (id)descriptor;
@end
