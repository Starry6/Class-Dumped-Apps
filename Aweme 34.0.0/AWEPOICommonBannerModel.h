@interface AWEPOICommonBannerModel : MTLModel
@property (nonatomic) AWEURLModel bannerUrl;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detailText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bannerUrl;
- (void)setBannerUrl:;
- (id)schema;
- (void)setSchema:;
- (id)detailText;
- (void)setDetailText:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
