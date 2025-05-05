@interface IESECLiveDynamicRegionModel : MTLModel
@property (nonatomic) q dynamicType;
@property (nonatomic) NSString templateURL;
@property (nonatomic) q regionBusinessType;
@property (nonatomic) NSString regionParams;
@property (nonatomic) NSString regionName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDynamicType:;
- (long long)dynamicType;
- (long long)regionBusinessType;
- (id)regionParams;
- (void)setRegionBusinessType:;
- (void)setRegionParams:;
- (id)templateURL;
- (void).cxx_destruct;
- (void)setTemplateURL:;
- (id)regionName;
- (void)setRegionName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
