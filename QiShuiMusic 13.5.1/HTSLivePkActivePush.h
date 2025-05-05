@interface HTSLivePkActivePush : IESLivePBBaseMessage
@property (nonatomic) HTSLivePkActivePush_Matcher matcherR;
@property (nonatomic) BOOL hasMatcherR;
@property (nonatomic) NSString matchReason;
@property (nonatomic) q waitSeconds;
@property (nonatomic) NSString signExtra;
@property (nonatomic) VoteSetting voteData;
@property (nonatomic) BOOL hasVoteData;
@property (nonatomic) NSString battleAttachedInfo;
+ (id)descriptor;
@end
