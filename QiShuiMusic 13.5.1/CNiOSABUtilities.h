@interface CNiOSABUtilities : NSObject
- (void)dealloc;
- (id)initWithAddressBook:;
- (id)allAccountIdentifiers;
- (id)filterPeople:matchingAccountIdentifiers:;
@end
