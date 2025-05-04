@interface AWEDemaciaLongVideoModel : AWEBaseApiModel
@property (nonatomic) AWEDemaciaVideoModel video;
@property (nonatomic) q type;
@property (nonatomic) double trailerStartTime;
- (double)trailerStartTime;
- (void)setTrailerStartTime:;
- (id)video;
- (void)setVideo:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
