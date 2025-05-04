@interface AWECodeGenShootPositionListModel : AWEBaseDataModel
@property (nonatomic) NSInteger total;
@property (nonatomic) NSArray positionListModelArray;
- (id)positionListModelArray;
- (void)setPositionListModelArray:;
- (void).cxx_destruct;
- (int)total;
- (void)setTotal:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
