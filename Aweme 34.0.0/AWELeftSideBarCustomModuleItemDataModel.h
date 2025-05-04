@interface AWELeftSideBarCustomModuleItemDataModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL needLogin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needLogin;
- (void)setNeedLogin:;
- (id)schema;
- (void)setSchema:;
- (id)description;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
