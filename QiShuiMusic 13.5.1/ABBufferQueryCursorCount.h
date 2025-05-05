@interface ABBufferQueryCursorCount : NSObject
@property (nonatomic) ABBufferQueryCount query;
- (id)initWithQuery:;
- (void)dealloc;
- (id)query;
- (long long)fetchContactCount;
- (id)initWithAddressBook:predicate:includeLinkedContacts:managedConfiguration:;
@end
