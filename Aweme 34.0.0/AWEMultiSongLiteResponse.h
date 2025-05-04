@interface AWEMultiSongLiteResponse : AWEBaseApiModel
@property (nonatomic) NSArray musics;
- (id)musics;
- (void)setMusics:;
- (void).cxx_destruct;
+ (id)musicsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
