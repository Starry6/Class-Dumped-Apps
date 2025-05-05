@interface STiCloudOrganization : STCoreOrganization
@property (nonatomic) STiCloudOrganizationSettings settings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)serializableClassName;
+ (id)fetchOrCreateiCloudOrganizationWithContext:error:;
@end
