@interface AWELunaAnchorRecommendInfoResponse : AWEBaseApiModel
@property (nonatomic) NSArray recommendTracks;
- (id)recommendTracks;
- (void)setRecommendTracks:;
- (void).cxx_destruct;
+ (id)recommendTracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
