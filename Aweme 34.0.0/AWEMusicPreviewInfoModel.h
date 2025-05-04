@interface AWEMusicPreviewInfoModel : MTLModel
@property (nonatomic) q start_ms;
@property (nonatomic) q duration_ms;
@property (nonatomic) AWEMusicURLModel fullPlayURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStart_ms:;
- (void)setDuration_ms:;
- (void)setFullPlayURL:;
- (long long)start_ms;
- (long long)duration_ms;
- (id)fullPlayURL;
- (void).cxx_destruct;
+ (id)fullPlayURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
