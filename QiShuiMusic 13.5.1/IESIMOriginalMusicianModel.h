@interface IESIMOriginalMusicianModel : IESIMBaseApiModel
@property (nonatomic) NSNumber musicCount;
@property (nonatomic) NSNumber musicUsedCount;
@property (nonatomic) IESIMURLModel musicQRCodeURL;
@property (nonatomic) IESIMURLModel musicCoverURL;
@property (nonatomic) NSNumber diggCount;
@property (nonatomic) NSNumber fullMusicCount;
@property (nonatomic) NSNumber forceMusicItemCount;
- (id)diggCount;
- (id)forceMusicItemCount;
- (id)fullMusicCount;
- (id)musicCount;
- (id)musicCoverURL;
- (id)musicQRCodeURL;
- (id)musicUsedCount;
- (void)setDiggCount:;
- (void)setForceMusicItemCount:;
- (void)setFullMusicCount:;
- (void)setMusicCount:;
- (void)setMusicCoverURL:;
- (void)setMusicQRCodeURL:;
- (void)setMusicUsedCount:;
- (id)init;
- (id)initWithDict:;
- (void).cxx_destruct;
+ (id)musicCoverURLJSONTransformer;
+ (id)musicQRCodeURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
