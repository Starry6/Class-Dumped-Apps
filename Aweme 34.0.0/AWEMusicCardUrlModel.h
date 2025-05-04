@interface AWEMusicCardUrlModel : AWEBaseApiModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString templatePrefix;
- (id)templatePrefix;
- (void)setTemplatePrefix:;
- (void)setUrls:;
- (id)uri;
- (void)setUri:;
- (void).cxx_destruct;
- (id)urls;
+ (id)JSONKeyPathsByPropertyKey;
@end
