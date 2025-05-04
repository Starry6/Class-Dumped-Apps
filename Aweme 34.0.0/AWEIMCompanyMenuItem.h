@interface AWEIMCompanyMenuItem : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString action;
@property (nonatomic) NSString menuKey;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSArray subMenuList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (id)menuKey;
- (void)setMenuKey:;
- (id)subMenuList;
- (void)setSubMenuList:;
- (void)setAction:;
- (long long)type;
- (id)action;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)subMenuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
