@interface IESLiveChorusMidiRank : IESLivePBBaseMessage
@property (nonatomic) IESLiveChorusRankUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q rank;
@property (nonatomic) NSString curMidiScore;
+ (id)descriptor;
@end
