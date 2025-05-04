@interface AWEIMPlatformGroupFeatureItem : MTLModel
@property (nonatomic) q featureType;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray authorizedDisplayingRoles;
@property (nonatomic) NSArray authorizedEditingRoles;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)authorizedDisplayingRoles;
- (id)authorizedEditingRoles;
- (BOOL)allowDisplayEntryWithRole:;
- (BOOL)allowEditingWithRole:;
- (void)setAuthorizedDisplayingRoles:;
- (void)setAuthorizedEditingRoles:;
- (long long)featureType;
- (id)extra;
- (void)setDesc:;
- (id)desc;
- (id)initWithRawDictionary:;
- (void).cxx_destruct;
- (void)setFeatureType:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
