@interface CNADirectoryServerSearchTask : CNTask
@property (nonatomic) CNAutocompleteFetchRequest request;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNCancelationToken cancelationToken;
- (id)request;
- (id)run;
- (id)cancelationToken;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithRequest:contactStore:cancelationToken:;
- (void)validateRequest;
- (void)fetchServerSearchContainers;
- (void)searchServerContainers;
- (id)makeQueryForContainer:withLatch:andCollectConsumers:;
- (void)convertResults;
- (void)createReturnValue;
@end
