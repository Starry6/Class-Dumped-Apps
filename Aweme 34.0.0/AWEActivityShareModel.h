@interface AWEActivityShareModel : AWEBaseApiModel
@property (nonatomic) NSNumber useMusicCount;
@property (nonatomic) NSNumber diggCount;
@property (nonatomic) AWEURLModel musicCoverURL;
@property (nonatomic) AWEURLModel musicQRCodeURL;
- (id)diggCount;
- (void)setDiggCount:;
- (id)useMusicCount;
- (void)setUseMusicCount:;
- (id)musicCoverURL;
- (void)setMusicCoverURL:;
- (id)musicQRCodeURL;
- (void)setMusicQRCodeURL:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDict:;
+ (id)musicCoverURLJSONTransformer;
+ (id)musicQRCodeURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
