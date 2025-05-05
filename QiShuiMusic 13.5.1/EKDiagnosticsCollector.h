@interface EKDiagnosticsCollector : NSObject
@property (nonatomic) BOOL redactLogs;
@property (nonatomic) <EKDiagnosticsCollectionDelegate> delegate;
@property (nonatomic) NSArray files;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (id)delegate;
- (void).cxx_destruct;
- (void)disconnected;
- (void)receivedBatchResultsFromServer:finished:;
- (id)initWithEventStore:delegate:;
- (void)collectDiagnostics;
- (void)cancelDiagnosticsCollection;
- (id)files;
- (BOOL)redactLogs;
- (void)setRedactLogs:;
@end
