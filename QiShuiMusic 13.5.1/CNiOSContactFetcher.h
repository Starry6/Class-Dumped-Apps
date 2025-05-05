@interface CNiOSContactFetcher : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)executeFetchRequestWithProgressiveResults:completion:;
- (id)initWithFetchRequest:addressBook:environment:managedConfiguration:;
- (id)fetchContactsReturningMatchInfos:error:;
+ (id)contactsForFetchRequest:matchInfos:inAddressBook:environment:managedConfiguration:error:;
@end
