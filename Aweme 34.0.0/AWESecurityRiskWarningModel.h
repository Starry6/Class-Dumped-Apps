@interface AWESecurityRiskWarningModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray params;
@property (nonatomic) NSString remindType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remindType;
- (void)setRemindType:;
- (void).cxx_destruct;
- (id)title;
- (id)params;
- (void)setTitle:;
- (void)setParams:;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
