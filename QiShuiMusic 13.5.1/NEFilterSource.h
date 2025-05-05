@interface NEFilterSource : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) q status;
@property (nonatomic) q direction;
@property (nonatomic) Q socketIdentifier;
@property (nonatomic) NSString sourceAppIdentifier;
@property (nonatomic) NSInteger sourceAppPid;
- (long long)direction;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (long long)status;
- (id)sourceAppIdentifier;
- (void)setSourceAppIdentifier:;
- (void)receivedResponse:decisionHandler:;
- (void)receivedData:decisionHandler:;
- (void)setSourceAppPid:;
- (void)remediateWithDecisionHandler:;
- (void)willSendRequest:decisionHandler:;
- (void)finishedLoadingWithDecisionHandler:;
- (id)initWithDecisionQueue:;
- (id)initWithURL:direction:socketIdentifier:;
- (void)addData:withCompletionQueue:completionHandler:;
- (void)dataCompleteWithCompletionQueue:completionHandler:;
- (unsigned long long)socketIdentifier;
- (int)sourceAppPid;
+ (BOOL)filterRequired;
@end
