@interface SASocialProfile : AceObject
@property (nonatomic) NSString serviceType;
@property (nonatomic) NSString url;
@property (nonatomic) NSString userName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)url;
- (id)groupIdentifier;
- (id)userName;
- (id)serviceType;
- (void)setServiceType:;
- (void)setUrl:;
- (void)setUserName:;
- (id)encodedClassName;
+ (id)socialProfile;
+ (id)socialProfileWithDictionary:context:;
@end
