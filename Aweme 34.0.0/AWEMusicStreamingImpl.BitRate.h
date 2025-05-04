@interface AWEMusicStreamingImpl.BitRate : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q br;
@property (nonatomic) q size;
@property (nonatomic) NSString quality;
- (long long)br;
- (void)setBr:;
- (void)setQuality:;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)quality;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
