@interface SASportsEntityGroup : SASportsEntity
@property (nonatomic) NSArray entities;
@property (nonatomic) NSString groupType;
- (id)groupType;
- (id)groupIdentifier;
- (id)entities;
- (void)setEntities:;
- (void)setGroupType:;
- (id)encodedClassName;
+ (id)entityGroup;
+ (id)entityGroupWithDictionary:context:;
@end
