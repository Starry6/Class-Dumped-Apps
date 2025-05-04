@interface AWECodeGenBubbleToastModel : AWEBaseDataModel
@property (nonatomic) NSArray iconListModelArray;
@property (nonatomic) NSString descriptionString;
- (id)iconListModelArray;
- (void)setIconListModelArray:;
- (void)setDescriptionString:;
- (id)descriptionString;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
