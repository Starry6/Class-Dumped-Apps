@interface CNUIFamilyMemberContactsEditingStrategy : NSObject
@property (nonatomic) NSArray prohibitedPropertyKeys;
@property (nonatomic) @? sensitiveDataContactFilter;
- (void).cxx_destruct;
- (id)prohibitedPropertyKeys;
- (id)initWithProhibitedPropertyKeys:sensitiveDataContactFilter:;
- (id)sensitiveDataContactFilter;
+ (id)managedContactsStrategy;
+ (id)whitelistedContactsStrategy;
@end
