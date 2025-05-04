@interface AWEMusicSearchResult : AWEBaseApiModel
@property (nonatomic) AWEMediaModel media;
- (void).cxx_destruct;
- (id)media;
- (void)setMedia:;
+ (id)mediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
