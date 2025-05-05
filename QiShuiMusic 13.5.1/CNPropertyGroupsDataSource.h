@interface CNPropertyGroupsDataSource : NSObject
@property (nonatomic) CNMutableContact mutableContact;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNPolicy policy;
@property (nonatomic) NSDictionary linkedPoliciesByContactIdentifier;
@property (nonatomic) NSArray prohibitedPropertyKeys;
@property (nonatomic) NSDictionary propertyGroups;
- (void)setContactStore:;
- (void)setPolicy:;
- (id)policy;
- (void).cxx_destruct;
- (id)contactStore;
- (id)prohibitedPropertyKeys;
- (void)setProhibitedPropertyKeys:;
- (id)linkedPoliciesByContactIdentifier;
- (void)setLinkedPoliciesByContactIdentifier:;
- (id)propertyGroups;
- (id)mutableContact;
- (Class)groupClassForProperty:;
- (void)setMutableContact:;
- (id)initWithMutableContact:contactStore:policy:linkedPolicies:prohibitedKeys:;
- (void)buildPropertyGroups;
- (id)propertyGroupsForKeys:;
- (id)allDisplayPropertyItemsForPropertyKeys:;
- (id)allDisplayPropertyItemsFromGroups:;
- (void)setPropertyGroups:;
@end
