@interface HTSLiveMonkeyGiftRankData_Rank : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) BOOL onList;
@property (nonatomic) q rank;
@property (nonatomic) NSInteger score;
@property (nonatomic) NSInteger delta;
@property (nonatomic) NSInteger medal;
@property (nonatomic) NSString anchorOpenId;
@property (nonatomic) NSString anchorName;
@property (nonatomic) NSString anchorRoomId;
@property (nonatomic) NSString anchorUnionId;
+ (id)descriptor;
@end
