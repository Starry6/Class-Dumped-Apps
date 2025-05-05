@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSSet missingURLs;
@property (nonatomic) NSSet deletedURLs;
@property (nonatomic) NSSet parsedContents;
@property (nonatomic) BOOL shouldIgnoreResponseErrors;
@property (nonatomic) @? completionBlock;
@property (nonatomic) <CoreDAVTaskManager> taskManager;
@property (nonatomic) <CoreDAVAccountInfoProvider> accountInfoProvider;
@property (nonatomic) NSError error;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startTaskGroup;
- (id)error;
- (void).cxx_destruct;
- (id)missingURLs;
- (id)deletedURLs;
- (id)parsedContents;
- (BOOL)shouldIgnoreResponseErrors;
- (void)setShouldIgnoreResponseErrors:;
- (id)initWithURLs:multiGetBlock:getBlock:accountInfoProvider:taskManager:;
- (void)_configureAndSubmitTask:;
- (void)_switchToSingleGetMode;
- (void)_fetchOneItem;
@end
