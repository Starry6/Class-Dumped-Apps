@interface IESECLiveGoodsFlickerImageModel : MTLModel
@property (nonatomic) IESECLiveImageURLModel flickerImageInfo;
@property (nonatomic) NSString flickerImageTag;
@property (nonatomic) NSNumber flickerImageDuration;
@property (nonatomic) BOOL showIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)flickerImageTag;
- (id)flickerImageDuration;
- (id)flickerImageInfo;
- (void)setFlickerImageDuration:;
- (void)setFlickerImageInfo:;
- (void)setFlickerImageTag:;
- (void)setShowIndex:;
- (BOOL)showIndex;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
