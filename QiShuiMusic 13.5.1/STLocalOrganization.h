@interface STLocalOrganization : STCoreOrganization
@property (nonatomic) STLocalOrganizationSettings settings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)fetchOrCreateLocalOrganizationWithContext:error:;
+ (id)serializableClassName;
@end
