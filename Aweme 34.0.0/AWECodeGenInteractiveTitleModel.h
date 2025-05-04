@interface AWECodeGenInteractiveTitleModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray interactiveTitleParamsModelArray;
- (id)interactiveTitleParamsModelArray;
- (void)setInteractiveTitleParamsModelArray:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
