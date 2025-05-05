@interface IESIMSaaSMoticonThemeResponseModel : MTLModel
@property (nonatomic) NSNumber identifier;
@property (nonatomic) NSNumber version;
@property (nonatomic) NSString display_name;
@property (nonatomic) NSString icon_url;
@property (nonatomic) NSString resource_url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)display_name;
- (id)icon_url;
- (id)resource_url;
- (void)setDisplay_name:;
- (void)setIcon_url:;
- (void)setResource_url:;
- (void)setVersion:;
- (id)version;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
+ (id)JSONKeyPathsByPropertyKey;
@end
