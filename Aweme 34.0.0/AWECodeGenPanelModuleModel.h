@interface AWECodeGenPanelModuleModel : AWEBaseDataModel
@property (nonatomic) NSString moduleId;
@property (nonatomic) NSString moduleType;
@property (nonatomic) NSString moduleTitle;
@property (nonatomic) NSString moduleDesc;
@property (nonatomic) NSArray moduleItemsModelArray;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)moduleId;
- (void)setModuleId:;
- (id)moduleTitle;
- (void)setModuleTitle:;
- (id)moduleItemsModelArray;
- (id)moduleDesc;
- (void)setModuleDesc:;
- (void)setModuleItemsModelArray:;
- (id)extra;
- (void).cxx_destruct;
- (id)moduleType;
- (void)setModuleType:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
