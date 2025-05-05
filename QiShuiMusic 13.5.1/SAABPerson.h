@interface SAABPerson : SAPerson
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)person;
+ (id)personWithDictionary:context:;
@end
