@interface MSSearch : MSXPCService
@property (nonatomic) <MSSearchDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_initWithDelegate:;
- (void)cancel;
- (id)newConnectionForInterface:;
- (void)setDelegate:;
- (void)foundResults:error:;
- (void)_delegateDidFindResults:;
- (void)_findMessageData:matchingCriterion:options:;
- (id)initWithRemoteObjectInterface:;
- (void)_delegateDidFinishWithError:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)findMessageData:matchingCriterion:options:delegate:;
+ (id)findMessageData:matchingCriterion:shouldFetch:onServer:delegate:;
+ (id)findMessageData:matchingCriterion:shouldFetch:onServer:onlyInboxes:delegate:;
@end
