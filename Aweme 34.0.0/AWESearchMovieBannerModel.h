@interface AWESearchMovieBannerModel : AWEBaseApiModel
@property (nonatomic) NSURL link;
@property (nonatomic) AWEURLModel image;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;
@end
