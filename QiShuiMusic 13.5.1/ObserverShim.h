@interface ObserverShim : NSObject
@property (nonatomic) <OSADiagnosticObserver> observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithObserver:;
- (void).cxx_destruct;
- (BOOL)matches:;
- (id)observer;
- (void)didReceiveDiagnosticLog:ofType:details:;
- (void)willWriteDiagnosticLog:ofType:;
- (void)didWriteDiagnosticLog:ofType:toPath:;
- (void)failedToWriteDiagnosticLog:ofType:error:;
@end
