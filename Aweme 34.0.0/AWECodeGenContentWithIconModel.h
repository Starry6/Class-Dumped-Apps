@interface AWECodeGenContentWithIconModel : AWEBaseDataModel
@property (nonatomic) NSString content;
@property (nonatomic) NSArray iconIndexModelArray;
- (id)iconIndexModelArray;
- (void)setIconIndexModelArray:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
