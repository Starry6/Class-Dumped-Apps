@interface QueryPopularCardResponse_PopularCard : IESLivePBBaseMessage
@property (nonatomic) q cardId;
@property (nonatomic) q roomId;
@property (nonatomic) q userId;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSInteger amount;
@property (nonatomic) q enterNumber;
@property (nonatomic) NSInteger status;
@property (nonatomic) q nowTime;
@property (nonatomic) NSInteger localEnterNumber;
@property (nonatomic) NSInteger cardType;
@property (nonatomic) NSInteger cardVersion;
@property (nonatomic) q actualEndTime;
@property (nonatomic) NSInteger cardLevel;
@property (nonatomic) NSInteger pvLevel;
@property (nonatomic) NSInteger type;
+ (id)descriptor;
@end
