@interface AWEEcommerceSearchBoxBannerModel : MTLModel
@property (nonatomic) q bannerContentType;
@property (nonatomic) AWEEcommerceSearchBoxBannerContentModel imgContent;
@property (nonatomic) AWEEcommerceSearchBoxBannerContentModel imgTextContent;
@property (nonatomic) AWEEcommerceSearchBoxBannerSceneInfo sceneInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSceneInfo:;
- (id)sceneInfo;
- (id)imgTextContent;
- (id)imgContent;
- (long long)bannerContentType;
- (void)setBannerContentType:;
- (void)setImgContent:;
- (void)setImgTextContent:;
- (id)schema;
- (void).cxx_destruct;
+ (id)imgContentJSONTransformer;
+ (id)imgTextContentJSONTransformer;
+ (id)sceneInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
