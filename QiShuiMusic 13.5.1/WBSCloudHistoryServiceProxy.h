@interface WBSCloudHistoryServiceProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)saveChangesBypassingThrottler:completionHandler:;
- (id)_defaultProxyErrorHandlerWithSimpleReplyHandler:;
- (void)updateConfiguration:completionHandler:;
- (void).cxx_destruct;
- (void)resetForAccountChangeWithCompletionHandler:;
- (void)fetchDateOfNextPermittedSaveChangesAttemptWithCompletionHandler:;
- (void)fetchAndMergeChangesBypassingThrottler:completionHandler:;
- (id)initWithProxy:;
@end
