@interface AWEHotsoonRegularBarModel : AWEVCDAccountAlertModel
@property (nonatomic) q relationLayoutType;
- (long long)relationLayoutType;
- (void)setRelationLayoutType:;
+ (id)relationLayoutTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
