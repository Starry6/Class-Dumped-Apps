@interface AWETextTemplateDependResourceModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString resourceId;
@property (nonatomic) NSString path;
@property (nonatomic) NSString effectId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resourceId;
- (void)setResourceId:;
- (id)init;
- (id)path;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPath:;
- (id)effectId;
- (void)setEffectId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
