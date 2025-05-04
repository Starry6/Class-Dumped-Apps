@interface AWEPOIIconServiceModel : MTLModel
@property (nonatomic) Q serviceType;
@property (nonatomic) Q serviceIconType;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)serviceIconType;
- (void)setServiceIconType:;
- (id)icon;
- (unsigned long long)serviceType;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setServiceType:;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
