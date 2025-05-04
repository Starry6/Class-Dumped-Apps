@interface AWEIMForceInsertDecisionContext : NSObject
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) @? decisionCompletion;
@property (nonatomic) NSString loginUid;
@property (nonatomic) <IESIMHttpTask> prevRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLoginUid:;
- (void)setDecisionCompletion:;
- (id)decisionCompletion;
- (id)loginUid;
- (id)prevRequest;
- (void)setPrevRequest:;
- (void)dealloc;
- (void)setIsCancelled:;
- (BOOL)isCancelled;
- (void)cancel;
- (void).cxx_destruct;
@end
