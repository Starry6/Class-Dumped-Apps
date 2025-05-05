@interface VoteSetting : IESLivePBBaseMessage
@property (nonatomic) q voteType;
@property (nonatomic) NSString voteDes;
@property (nonatomic) q durationTime;
+ (id)descriptor;
@end
