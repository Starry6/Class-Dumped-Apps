@interface AWEHPLeftSlideToUserConfig : MTLModel
@property (nonatomic) double mainTabSlideWidth;
@property (nonatomic) double edgeSlideWidth;
@property (nonatomic) NSDictionary supportTabs;
@property (nonatomic) AWEHPLeftSlideToUserGuideConfig guideConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideConfig;
- (void)setGuideConfig:;
- (double)mainTabSlideWidth;
- (void)setMainTabSlideWidth:;
- (double)edgeSlideWidth;
- (void)setEdgeSlideWidth:;
- (id)supportTabs;
- (void)setSupportTabs:;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
