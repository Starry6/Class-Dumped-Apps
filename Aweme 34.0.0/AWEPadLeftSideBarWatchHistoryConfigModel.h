@interface AWEPadLeftSideBarWatchHistoryConfigModel : MTLModel
@property (nonatomic) BOOL needLogin;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString title;
@property (nonatomic) q moduleAppearCards;
@property (nonatomic) q moduleMaxCards;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (BOOL)needLogin;
- (void)setNeedLogin:;
- (long long)moduleAppearCards;
- (void)setModuleAppearCards:;
- (long long)moduleMaxCards;
- (void)setModuleMaxCards:;
- (id)init;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
