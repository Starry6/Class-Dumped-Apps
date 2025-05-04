@interface AWEMusicLeaderboardInfoModel : MTLModel
@property (nonatomic) NSString leaderboardID;
@property (nonatomic) NSString title;
@property (nonatomic) q rank;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaURL:;
- (id)schemaURL;
- (long long)rank;
- (void)setRank:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)leaderboardID;
- (void)setLeaderboardID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
