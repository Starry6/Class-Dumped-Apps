@interface BattleBarConfig : IESLivePBBaseMessage
@property (nonatomic) NSString leftColor;
@property (nonatomic) NSString rightColor;
@property (nonatomic) NSString leftScoreViewColor;
@property (nonatomic) NSString rightScoreViewColor;
@property (nonatomic) AnimeInfo animeInfo;
@property (nonatomic) BOOL hasAnimeInfo;
+ (id)descriptor;
@end
