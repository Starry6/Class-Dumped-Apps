@interface AWEShareWayConfigModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary titleDic;
@property (nonatomic) NSDictionary iconDic;
@property (nonatomic) NSDictionary sortOperations;
@property (nonatomic) q shareCategory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)shareCategory;
- (void)setShareCategory:;
- (id)titleDic;
- (id)iconDic;
- (id)sortOperations;
- (void)setTitleDic:;
- (void)setIconDic:;
- (void)setSortOperations:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)subSceneJSONTransformer;
+ (id)sortOperationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
