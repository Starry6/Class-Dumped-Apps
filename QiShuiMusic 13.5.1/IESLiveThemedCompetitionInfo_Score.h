@interface IESLiveThemedCompetitionInfo_Score : IESLivePBBaseMessage
@property (nonatomic) q score;
@property (nonatomic) NSString scoreFuzz;
@property (nonatomic) NSInteger winType;
@property (nonatomic) q rank;
@property (nonatomic) BOOL showEffect;
@property (nonatomic) NSString dressId;
+ (id)descriptor;
@end
