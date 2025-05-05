@interface SASmsGroupName : SADomainObject
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString groupNameId;
- (id)groupIdentifier;
- (void)setGroupName:;
- (id)encodedClassName;
- (id)groupName;
- (id)groupNameId;
- (void)setGroupNameId:;
+ (id)groupName;
+ (id)groupNameWithDictionary:context:;
@end
