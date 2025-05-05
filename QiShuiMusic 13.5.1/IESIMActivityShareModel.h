@interface IESIMActivityShareModel : IESIMBaseApiModel
@property (nonatomic) NSNumber useMusicCount;
@property (nonatomic) NSNumber diggCount;
@property (nonatomic) IESIMURLModel musicCoverURL;
@property (nonatomic) IESIMURLModel musicQRCodeURL;
- (id)diggCount;
- (id)musicCoverURL;
- (id)musicQRCodeURL;
- (void)setDiggCount:;
- (void)setMusicCoverURL:;
- (void)setMusicQRCodeURL:;
- (void)setUseMusicCount:;
- (id)useMusicCount;
- (id)init;
- (id)initWithDict:;
- (void).cxx_destruct;
+ (id)musicCoverURLJSONTransformer;
+ (id)musicQRCodeURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
