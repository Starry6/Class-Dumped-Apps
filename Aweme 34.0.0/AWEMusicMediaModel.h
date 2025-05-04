@interface AWEMusicMediaModel : AWEBaseApiModel
@property (nonatomic) NSArray imageSet;
- (void).cxx_destruct;
- (id)imageSet;
- (void)setImageSet:;
+ (id)imageSetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
