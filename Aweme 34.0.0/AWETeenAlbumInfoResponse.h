@interface AWETeenAlbumInfoResponse : AWEBaseApiModel
@property (nonatomic) NSArray albumInfos;
- (id)albumInfos;
- (void)setAlbumInfos:;
- (void).cxx_destruct;
+ (id)albumInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
