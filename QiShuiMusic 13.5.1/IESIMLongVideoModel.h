@interface IESIMLongVideoModel : IESIMBaseApiModel
@property (nonatomic) IESIMVideoModel video;
@property (nonatomic) q type;
@property (nonatomic) double trailerStartTime;
@property (nonatomic) IESIMLongVideoControlModel videoControl;
- (void)setTrailerStartTime:;
- (void)setVideoControl:;
- (double)trailerStartTime;
- (id)videoControl;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
+ (id)videoControlJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
