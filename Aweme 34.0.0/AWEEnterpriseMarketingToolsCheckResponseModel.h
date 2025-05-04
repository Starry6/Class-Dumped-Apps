@interface AWEEnterpriseMarketingToolsCheckResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL eMarketingTools;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray marketingTools;
@property (nonatomic) NSString linkToasts;
- (BOOL)eMarketingTools;
- (void)setEMarketingTools:;
- (id)marketingTools;
- (void)setMarketingTools:;
- (id)linkToasts;
- (void)setLinkToasts:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)marketingToolsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
