@interface HTSLiveFreeCellData : IESLivePBBaseMessage
@property (nonatomic) q timeNowMs;
@property (nonatomic) q timeStartMs;
@property (nonatomic) q timeFreezeEndMs;
@property (nonatomic) q timeDoubleEndMs;
@property (nonatomic) q timeEndMs;
@property (nonatomic) q freeCellLength;
@property (nonatomic) BOOL isFreeze;
@property (nonatomic) BOOL isDouble;
@property (nonatomic) HTSLiveUser contributeMostUser;
@property (nonatomic) BOOL hasContributeMostUser;
@property (nonatomic) q contributeMostCoins;
@property (nonatomic) q distanceFromPreviousOne;
@property (nonatomic) q indexInDayRanklist;
@property (nonatomic) q giftId;
+ (id)descriptor;
@end
