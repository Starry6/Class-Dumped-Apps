@interface AWECodeGenEntertainmentVideoPaidWayModel : AWEBaseDataModel
@property (nonatomic) NSArray paidWaysModelArray;
@property (nonatomic) q paidType;
- (long long)paidType;
- (void)setPaidType:;
- (id)paidWaysModelArray;
- (void)setPaidWaysModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
