@interface EKConferenceInvalidationRecord : NSObject
@property (nonatomic) NSURL validURL;
@property (nonatomic) NSMutableSet replacementForURLs;
@property (nonatomic) NSMutableArray waitingCompletionHandlers;
- (void).cxx_destruct;
- (void)generateNewValidURLForOriginalURL:;
- (void)finishWithURL:error:;
- (id)validURL;
- (void)setValidURL:;
- (id)replacementForURLs;
- (void)setReplacementForURLs:;
- (id)waitingCompletionHandlers;
- (void)setWaitingCompletionHandlers:;
@end
