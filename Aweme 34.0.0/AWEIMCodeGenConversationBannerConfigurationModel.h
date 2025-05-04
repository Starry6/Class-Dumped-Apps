@interface AWEIMCodeGenConversationBannerConfigurationModel : AWEBaseDataModel
@property (nonatomic) NSString bannerKey;
@property (nonatomic) NSDictionary texts;
@property (nonatomic) NSDictionary icons;
- (id)bannerKey;
- (void)setBannerKey:;
- (id)icons;
- (void)setIcons:;
- (void).cxx_destruct;
- (void)setTexts:;
- (id)texts;
+ (id)JSONKeyPathsByPropertyKey;
@end
