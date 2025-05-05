@interface IESECLiveGoodsReplayItemModel : MTLModel
@property (nonatomic) IESECLiveGoodsModel goodsModel;
@property (nonatomic) q commentaryType;
@property (nonatomic) IESECLiveGoodsReplayVideoModel video;
@property (nonatomic) IESECLiveGoodsReplayVideoModel videoV2;
@property (nonatomic) IESECLiveImageURLModel bgPic;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoV2;
- (id)bgPic;
- (long long)commentaryType;
- (id)goodsModel;
- (void)setBgPic:;
- (void)setCommentaryType:;
- (void)setExtra:;
- (void)setGoodsModel:;
- (void)setVideoV2:;
- (id)extra;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
+ (id)goodsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
