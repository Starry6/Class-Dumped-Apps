@interface AWESimilarMusicCoverModel : AWEBaseApiModel
@property (nonatomic) AWESimilarMusicCoverDetailModel thumbnail;
- (void)setThumbnail:;
- (id)thumbnail;
- (void).cxx_destruct;
+ (id)thumbnailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
