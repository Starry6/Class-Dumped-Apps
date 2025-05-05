@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSMutableSet urlsToExamine;
@property (nonatomic) NSMutableSet principalURLs;
@property (nonatomic) NSURL urlBeingExamined;
@property (nonatomic) NSSet resultPrincipalURLs;
@property (nonatomic) BOOL didReceiveAuthenticationError;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (void)_finishWithError:;
- (void).cxx_destruct;
- (void)cancelTaskGroup;
- (BOOL)didReceiveAuthenticationError;
- (id)initWithAccountInfoProvider:urls:taskManager:;
- (id)resultPrincipalURLs;
- (void)_fetchNextURL;
- (id)urlsToExamine;
- (void)setUrlsToExamine:;
- (id)principalURLs;
- (void)setPrincipalURLs:;
- (id)urlBeingExamined;
- (void)setUrlBeingExamined:;
@end
