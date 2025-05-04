@interface AWEIMGroupJoinCardPresenterModel : MTLModel
@property (nonatomic) NSArray functionsModel;
@property (nonatomic) NSArray containTypes;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString hint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)functionsModel;
- (id)containTypes;
- (void)setFunctionsModel:;
- (void)setContainTypes:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)hint;
- (void)setHint:;
+ (id)functionsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
