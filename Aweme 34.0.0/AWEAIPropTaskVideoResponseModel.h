@interface AWEAIPropTaskVideoResponseModel : MTLModel
@property (nonatomic) AWEAIPropTaskVideoSubSourceResponseModel cover;
@property (nonatomic) AWEAIPropTaskVideoSubSourceResponseModel video;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)video;
- (void)setVideo:;
- (void).cxx_destruct;
+ (id)coverJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
