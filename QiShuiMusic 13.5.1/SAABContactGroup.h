@interface SAABContactGroup : SADomainObject
@property (nonatomic) NSString groupName;
@property (nonatomic) SASource groupSource;
- (id)groupIdentifier;
- (void)setGroupName:;
- (id)encodedClassName;
- (id)groupName;
- (id)groupSource;
- (void)setGroupSource:;
+ (id)contactGroup;
+ (id)contactGroupWithDictionary:context:;
@end
