@interface IESIMPOIIconServiceModel : MTLModel
@property (nonatomic) Q serviceType;
@property (nonatomic) IESIMURLModel icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)serviceType;
- (id)icon;
- (void)setServiceType:;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
