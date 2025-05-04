@interface AWEPadSkyLightBannerCardModel : MTLModel
@property (nonatomic) NSString bannerUrl;
@property (nonatomic) NSString shcemaUrl;
@property (nonatomic) NSNumber bannerID;
@property (nonatomic) NSNumber exitTime;
@property (nonatomic) NSNumber rotationTime;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBannerID:;
- (id)bannerUrl;
- (void)setBannerUrl:;
- (id)shcemaUrl;
- (void)setShcemaUrl:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)exitTime;
- (id)bannerID;
- (void)setExitTime:;
- (id)rotationTime;
- (void)setRotationTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
