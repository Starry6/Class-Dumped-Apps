@interface AWEPadSkyLightGameCardModel : MTLModel
@property (nonatomic) NSString gameID;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString name;
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber playerCount;
@property (nonatomic) NSString recommendReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setRecommendReason:;
- (id)recommendReason;
- (id)gameID;
- (void)setGameID:;
- (id)playerCount;
- (void)setPlayerCount:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
