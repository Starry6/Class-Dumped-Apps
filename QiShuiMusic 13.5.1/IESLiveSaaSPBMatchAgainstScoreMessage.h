@interface IESLiveSaaSPBMatchAgainstScoreMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveSaaSPBAgainst against;
@property (nonatomic) BOOL hasAgainst;
@property (nonatomic) NSInteger matchStatus;
@property (nonatomic) NSInteger displayStatus;
@property (nonatomic) q matchId;
@property (nonatomic) NSString matchIdStr;
+ (id)descriptor;
@end
