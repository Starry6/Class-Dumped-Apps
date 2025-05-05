@interface IESECGoodsDetailReplayResponse : MTLModel
@property (nonatomic) IESECGoodsDetailReplayVideoModel video;
@property (nonatomic) NSDictionary videoV2;
@property (nonatomic) float cutOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoV2;
- (float)cutOffset;
- (void)setCutOffset:;
- (void)setVideoV2:;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
+ (id)JSONKeyPathsByPropertyKey;
@end
