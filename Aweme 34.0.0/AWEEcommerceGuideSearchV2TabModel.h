@interface AWEEcommerceGuideSearchV2TabModel : AWEBaseApiModel
@property (nonatomic) NSString tabID;
@property (nonatomic) AWEEcommerceGuideSearchV2TabTitleModel title;
@property (nonatomic) AWEEcommerceGuideSearchV2TabJumpLinkModel jumpLink;
@property (nonatomic) NSArray guideSearchWordList;
@property (nonatomic) AWEEcommerceGuideSearchV2TabBoxConfigModel boxConfig;
- (void)setTabID:;
- (id)jumpLink;
- (void)setJumpLink:;
- (id)guideSearchWordList;
- (void)setGuideSearchWordList:;
- (id)boxConfig;
- (void)setBoxConfig:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tabID;
+ (id)jumpLinkJSONTransformer;
+ (id)guideSearchWordListJSONTransformer;
+ (id)boxConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)titleJSONTransformer;
@end
