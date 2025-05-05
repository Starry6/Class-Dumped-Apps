@interface SASportsMatchupPlaySummary : AceObject
@property (nonatomic) BOOL appliesToAwayTeam;
@property (nonatomic) BOOL appliesToHomeTeam;
@property (nonatomic) NSString nonFormattedTime;
@property (nonatomic) SASportsAthlete offensivePlayer;
@property (nonatomic) NSString summaryDescription;
@property (nonatomic) NSString time;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTime:;
- (id)groupIdentifier;
- (id)time;
- (id)summaryDescription;
- (id)encodedClassName;
- (BOOL)appliesToAwayTeam;
- (void)setAppliesToAwayTeam:;
- (BOOL)appliesToHomeTeam;
- (void)setAppliesToHomeTeam:;
- (id)nonFormattedTime;
- (void)setNonFormattedTime:;
- (id)offensivePlayer;
- (void)setOffensivePlayer:;
- (void)setSummaryDescription:;
+ (id)matchupPlaySummary;
+ (id)matchupPlaySummaryWithDictionary:context:;
@end
