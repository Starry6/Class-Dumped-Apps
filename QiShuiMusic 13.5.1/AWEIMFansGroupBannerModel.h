@interface AWEIMFansGroupBannerModel : IESIMBaseApiModel
@property (nonatomic) NSString backGroundUrl;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSString bannerId;
- (id)backGroundUrl;
- (id)jumpSchema;
- (void)setBackGroundUrl:;
- (void)setJumpSchema:;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)bannerId;
- (void)setBannerId:;
- (id)mainTitle;
- (void)setMainTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
