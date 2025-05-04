@interface AWELongVideoModel : AWEBaseApiModel
@property (nonatomic) AWEVideoModel video;
@property (nonatomic) q type;
@property (nonatomic) double trailerStartTime;
@property (nonatomic) AWELongVideoControlModel videoControl;
- (id)videoControl;
- (double)trailerStartTime;
- (void)setTrailerStartTime:;
- (void)setVideoControl:;
- (id)video;
- (void)setVideo:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)videoJSONTransformer;
+ (id)videoControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
