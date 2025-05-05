@interface SACFPEXContactNameItem : SACFPEXItem
@property (nonatomic) SAPerson person;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPerson:;
- (id)person;
+ (id)contactNameItem;
+ (id)contactNameItemWithDictionary:context:;
@end
