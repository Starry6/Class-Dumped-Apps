@interface IESIMGeneralFilmTelevisionBannerModel : IESIMBaseApiModel
@property (nonatomic) NSURL link;
@property (nonatomic) IESIMURLModel image;
- (id)link;
- (void)setLink:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
