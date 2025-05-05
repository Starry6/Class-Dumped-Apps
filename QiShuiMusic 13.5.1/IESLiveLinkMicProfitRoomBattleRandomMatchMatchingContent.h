@interface IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixOperatorUserId;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString openingTimeTitle;
@property (nonatomic) q matchingExpectedTime;
@property (nonatomic) BOOL isMatching;
@property (nonatomic) NSString operatorOpenId;
@property (nonatomic) HTSLiveUser anchorUser;
@property (nonatomic) BOOL hasAnchorUser;
- (id)mixOperatorUserId;
- (void)setMixOperatorUserId:;
+ (id)descriptor;
@end
