@interface BDXBridgeAppShareShareCover : BDXBridgeModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSString template;
@property (nonatomic) NSString template_prefix;
@property (nonatomic) NSArray urls;
- (id)template_prefix;
- (void)setTemplate_prefix:;
- (id)uri;
- (id)urls;
- (void)setUrls:;
- (void).cxx_destruct;
- (void)setUri:;
- (id)template;
- (void)setTemplate:;
+ (id)JSONKeyPathsByPropertyKey;
@end
