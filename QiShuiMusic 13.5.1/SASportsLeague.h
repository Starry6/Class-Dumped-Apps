@interface SASportsLeague : AceObject
@property (nonatomic) NSString diplayedText;
@property (nonatomic) BOOL displayTeamLocationOverName;
@property (nonatomic) NSString displayedText;
@property (nonatomic) NSString identifier;
@property (nonatomic) SASportsSeason season;
@property (nonatomic) NSString sport;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifier;
- (id)encodedClassName;
- (id)displayedText;
- (void)setIdentifier:;
- (void)setDisplayedText:;
- (void)setSeason:;
- (id)season;
- (id)diplayedText;
- (void)setDiplayedText:;
- (BOOL)displayTeamLocationOverName;
- (void)setDisplayTeamLocationOverName:;
- (id)sport;
- (void)setSport:;
+ (id)league;
+ (id)leagueWithDictionary:context:;
@end
