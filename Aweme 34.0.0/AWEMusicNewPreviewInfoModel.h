@interface AWEMusicNewPreviewInfoModel : AWEBaseDataModel
@property (nonatomic) q start_ms;
@property (nonatomic) q duration_ms;
@property (nonatomic) AWENewURLModel fullPlayURL;
- (void)setStart_ms:;
- (void)setDuration_ms:;
- (void)setFullPlayURL:;
- (long long)start_ms;
- (long long)duration_ms;
- (id)fullPlayURL;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
