@interface IESECGoodsDetailSmallVideoDataModel : IESECBaseApiModel
@property (nonatomic) IESECHeadVideoModel video;
@property (nonatomic) NSDictionary videoTrackMeta;
- (void)setVideoTrackMeta:;
- (id)videoTrackMeta;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
+ (id)JSONKeyPathsByPropertyKey;
@end
