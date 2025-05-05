@interface CNiOSPersonFetcher : NSObject
@property (nonatomic) CNiOSPersonFetchRequest fetchRequest;
@property (nonatomic) ^v addressBook;
@property (nonatomic) CNContactsEnvironment environment;
- (void)dealloc;
- (id)environment;
- (id)addressBook;
- (void).cxx_destruct;
- (id)fetchRequest;
- (id)initWithAddressBook:fetchRequest:environment:;
- (id)executeFetchRequestWithProgressiveResults:completion:;
- (id)fetchPeopleReturningMatchInfos:error:;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:error:;
- (BOOL)shouldSortInMemory;
- (id)sortPeople:;
+ (id)peopleForFetchRequest:matchInfos:inAddressBook:environment:error:;
@end
