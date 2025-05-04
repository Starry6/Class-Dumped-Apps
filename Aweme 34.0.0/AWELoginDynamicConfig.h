@interface AWELoginDynamicConfig : MTLModel
@property (nonatomic) NSString firstShowPanel;
@property (nonatomic) NSArray lastLoginContains;
@property (nonatomic) NSArray loginPriorityList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)firstShowPanel;
- (void)setFirstShowPanel:;
- (id)lastLoginContains;
- (void)setLastLoginContains:;
- (id)loginPriorityList;
- (void)setLoginPriorityList:;
- (void).cxx_destruct;
+ (id)loginPriorityListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
