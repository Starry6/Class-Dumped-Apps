@interface ABSBulkFaultHandler : NSObject
@property (nonatomic) ABSAddressBookContextStorage storage;
@property (nonatomic) <CNScheduler> inlineScheduler;
@property (nonatomic) CNFuture contactStoreFuture;
@property (nonatomic) NSMutableSet keyDescriptorOfInterests;
@property (nonatomic) q interest;
@property (nonatomic) double lastRequestTimeStamp;
- (id)inlineScheduler;
- (id)storage;
- (void).cxx_destruct;
- (id)store;
- (long long)interest;
- (void)setInterest:;
- (id)contactStoreFuture;
- (id)initWithStorage:contactStoreFuture:schedulerProvider:;
- (void)completePerson:withKeysToFetch:;
- (BOOL)withinInterestWindow;
- (void)resetInterest;
- (void)increaseInterest;
- (id)batchOfPeopleInStorageMissingKeysIncluding:;
- (void)completePeople:withKeysToFetch:;
- (void)refetchContacts:keysToFetch:handler:;
- (id)keyDescriptorOfInterests;
- (double)lastRequestTimeStamp;
- (void)setLastRequestTimeStamp:;
+ (long long)batchSize;
+ (double)interestWindow;
+ (long long)interestThreshold;
@end
