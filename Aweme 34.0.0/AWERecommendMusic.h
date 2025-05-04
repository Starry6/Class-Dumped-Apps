@interface AWERecommendMusic : AWEBaseApiModel
@property (nonatomic) AWEMusicModel music;
@property (nonatomic) NSString username;
@property (nonatomic) NSString schema;
- (id)schema;
- (void)setUsername:;
- (void)setSchema:;
- (id)music;
- (id)username;
- (void)setMusic:;
- (void).cxx_destruct;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
