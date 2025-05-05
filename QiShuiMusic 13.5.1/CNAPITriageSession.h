@interface CNAPITriageSession : NSObject
@property (nonatomic) CNContactFetchRequest request;
@property (nonatomic) <CNAPITriageLogger> logger;
@property (nonatomic) <CNTimeProvider> timeProvider;
- (id)logger;
- (id)initWithRequest:;
- (void)closeWithError:;
- (id)init;
- (id)timeProvider;
- (void)addClientCalloutTime:;
- (void)open;
- (void)close;
- (id)request;
- (void)closeWithContacts:orError:;
- (void).cxx_destruct;
- (void)closeWithContacts:;
- (id)initWithRequest:triageLogger:timeProvider:;
- (id)normalizeCollectionOfContacts:;
- (void)closeWithResult:;
@end
