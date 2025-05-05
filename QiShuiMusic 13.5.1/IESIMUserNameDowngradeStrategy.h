@interface IESIMUserNameDowngradeStrategy : MTLModel
@property (nonatomic) NSString scene;
@property (nonatomic) Q downgradeType;
@property (nonatomic) NSString customString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customString;
- (unsigned long long)downgradeType;
- (id)scene;
- (void).cxx_destruct;
+ (id)downgradeTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
