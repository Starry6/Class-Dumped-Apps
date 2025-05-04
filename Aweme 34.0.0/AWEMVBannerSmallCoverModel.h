@interface AWEMVBannerSmallCoverModel : MTLModel
@property (nonatomic) AWEURLModel horizontalCoverURL;
@property (nonatomic) AWEURLModel verticalCoverURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)horizontalCoverURL;
- (id)verticalCoverURL;
- (void)setHorizontalCoverURL:;
- (void)setVerticalCoverURL:;
- (void).cxx_destruct;
+ (id)horizontalCoverURLJSONTransformer;
+ (id)verticalCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
