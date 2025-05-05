@interface CNiOSAddressBook : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSMutableSet addressBookPool;
@property (nonatomic) @? addressBookProvider;
@property (nonatomic) NSObject<OS_dispatch_source> memoryMonitoringSource;
@property (nonatomic) BOOL addressBookIsShared;
- (id)accessQueue;
- (id)init;
- (id)performAsynchronousWorkWithInvalidatedAddressBook:;
- (void)flushPool;
- (id)performSynchronousWorkWithInvalidatedAddressBook:;
- (id)resultWithInvalidatedAddressBook:;
- (id)addressBookProvider;
- (id)addressBookPool;
- (BOOL)addressBookIsShared;
- (void).cxx_destruct;
- (id)initWithAddressBookProvider:;
- (id)preparedAddressBook:;
- (void)pushAddressBook:;
- (id)initWithContactsEnvironment:;
- (id)popAddressBook;
- (id)memoryMonitoringSource;
+ (id)newAddressBookWithURL:;
+ (id)newAddressBookWithDelegateInfo:;
+ (id)newInMemoryAddressBook;
@end
