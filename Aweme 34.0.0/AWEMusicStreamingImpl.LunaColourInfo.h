@interface AWEMusicStreamingImpl.LunaColourInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString alpha;
@property (nonatomic) NSString rgb;
- (id)rgb;
- (void)setRgb:;
- (id)initWithDictionary:error:;
- (void)setAlpha:;
- (id)init;
- (id)alpha;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)getColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
