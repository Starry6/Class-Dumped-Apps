@interface STAskForTimeResource : NSObject
@property (nonatomic) STAskForTimeClient askForTimeClient;
@property (nonatomic) STAskForTimeRequest request;
@property (nonatomic) NSInteger notificationToken;
@property (nonatomic) @? changeHandler;
- (void)dealloc;
- (id)changeHandler;
- (id)request;
- (void).cxx_destruct;
- (int)notificationToken;
- (id)initWithResourceIdentifier:resourceDisplayName:usageType:changeHandler:;
- (void)requestAdditionalTime:completionHandler:;
- (void)approveAdditionalTime:completionHandler:;
- (void)approveOneMoreMinuteWithCompletionHandler:;
- (void)_approveExceptionForRequest:withCompletionHandler:;
- (void)checkRequestForAdditionalTimeWithResponseHandler:;
- (void)cancelOutstandingRequestsWithCompletion:;
- (id)askForTimeClient;
- (void)setAskForTimeClient:;
@end
