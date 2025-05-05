@interface IESIMSimilarMusicCoverModel : IESIMBaseApiModel
@property (nonatomic) IESIMSimilarMusicCoverDetailModel thumbnail;
- (void)setThumbnail:;
- (id)thumbnail;
- (void).cxx_destruct;
+ (id)thumbnailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
