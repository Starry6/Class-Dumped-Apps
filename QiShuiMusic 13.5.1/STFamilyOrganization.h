@interface STFamilyOrganization : STCoreOrganization
@property (nonatomic) NSSet settings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)serializableClassName;
+ (id)fetchOrCreateFamilyOrganizationWithContext:error:;
@end
