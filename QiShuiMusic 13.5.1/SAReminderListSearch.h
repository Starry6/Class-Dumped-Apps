@interface SAReminderListSearch : SADomainCommand
@property (nonatomic) NSString accountName;
@property (nonatomic) NSString name;
@property (nonatomic) SAReminderTrigger trigger;
- (void)setName:;
- (id)groupIdentifier;
- (void)setTrigger:;
- (BOOL)requiresResponse;
- (void)setAccountName:;
- (id)trigger;
- (id)encodedClassName;
- (id)name;
- (id)accountName;
+ (id)listSearch;
+ (id)listSearchWithDictionary:context:;
@end
