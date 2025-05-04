@interface AWEPadBannerLiveStreamModel : MTLModel
@property (nonatomic) NSNumber bannerID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString title;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSDictionary webcastInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverUrl:;
- (id)coverUrl;
- (void)setBannerID:;
- (id)webcastInfo;
- (void)setWebcastInfo:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)bannerID;
+ (id)JSONKeyPathsByPropertyKey;
@end
