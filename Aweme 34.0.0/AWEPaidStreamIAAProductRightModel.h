@interface AWEPaidStreamIAAProductRightModel : AWEBaseApiModel
@property (nonatomic) NSNumber fieldType;
@property (nonatomic) NSDictionary episodeDetails;
- (id)episodeDetails;
- (void)setEpisodeDetails:;
- (id)fieldType;
- (void).cxx_destruct;
- (void)setFieldType:;
+ (id)jsonParsingError;
+ (id)episodeDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
