@interface IESECLiveGoodsListLowPriceInfoModel : MTLModel
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSString jumpURLStr;
@property (nonatomic) IESECLiveImageURLModel bgImage;
@property (nonatomic) NSArray leftContent;
@property (nonatomic) NSArray rightContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (void)setLeftContent:;
- (id)jumpURLStr;
- (id)leftContent;
- (id)rightContent;
- (void)setJumpURLStr:;
- (void)setRightContent:;
- (id)trackParams;
- (void).cxx_destruct;
- (void)setBgImage:;
- (id)bgImage;
+ (id)leftContentJSONTransformer;
+ (id)rightContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
