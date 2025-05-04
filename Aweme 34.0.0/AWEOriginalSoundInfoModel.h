@interface AWEOriginalSoundInfoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel playURL;
- (void).cxx_destruct;
- (id)playURL;
+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
