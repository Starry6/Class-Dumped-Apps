@interface IESECGoodsDetailMiniVideoModel : MTLModel
@property (nonatomic) IESECHeadVideoModel video;
@property (nonatomic) NSString openLink;
@property (nonatomic) NSDictionary videoTrackMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOpenLink:;
- (void)setVideoTrackMeta:;
- (id)videoTrackMeta;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)openLink;
+ (id)JSONKeyPathsByPropertyKey;
@end
