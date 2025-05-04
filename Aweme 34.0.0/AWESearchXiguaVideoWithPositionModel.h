@interface AWESearchXiguaVideoWithPositionModel : AWEBaseApiModel
@property (nonatomic) AWESearchXiguaVideoModel videoInfoModel;
@property (nonatomic) NSArray positions;
- (void)setPositions:;
- (id)videoInfoModel;
- (void)setVideoInfoModel:;
- (void).cxx_destruct;
- (id)positions;
+ (id)positionsJSONTransformer;
+ (id)videoInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
