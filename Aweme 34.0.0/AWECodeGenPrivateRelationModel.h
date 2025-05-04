@interface AWECodeGenPrivateRelationModel : AWEBaseDataModel
@property (nonatomic) q relationType;
@property (nonatomic) NSInteger relationValue;
- (void)setRelationType:;
- (int)relationValue;
- (void)setRelationValue:;
- (long long)relationType;
+ (id)JSONKeyPathsByPropertyKey;
@end
