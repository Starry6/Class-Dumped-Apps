@interface AWEEnterpriseMarketingToolsLinkToastModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) q position;
@property (nonatomic) NSString tagText;
@property (nonatomic) NSString linkText;
@property (nonatomic) NSString jumpUrl;
- (void)setTagText:;
- (id)tagText;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (long long)position;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)linkText;
- (void)setLinkText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
