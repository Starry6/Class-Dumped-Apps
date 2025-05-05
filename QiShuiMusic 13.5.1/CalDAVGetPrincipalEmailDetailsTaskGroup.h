@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup
@property (nonatomic) CalDAVPrincipalEmailDetailsResult principalResult;
@property (nonatomic) NSURL principalURL;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSSet addresses;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)principalURL;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (void)_finishWithError:;
- (id)displayName;
- (void).cxx_destruct;
- (id)addresses;
- (void)setPrincipalURL:;
- (id)initWithAccountInfoProvider:principalURL:taskManager:;
- (void)_processPropFind:;
- (id)principalResult;
- (void)setPrincipalResult:;
@end
