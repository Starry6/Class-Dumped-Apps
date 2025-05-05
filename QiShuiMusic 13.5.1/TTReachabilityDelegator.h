@interface TTReachabilityDelegator : NSObject
@property (nonatomic) NSString dataServiceIdentifier;
@property (nonatomic) NSObject<OS_dispatch_semaphore> dataServiceIdentifierLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataServiceIdentifierLock;
- (void)setDataServiceIdentifier:;
- (void)setDataServiceIdentifierLock:;
- (id)dataServiceIdentifier;
- (void).cxx_destruct;
- (void)dataServiceIdentifierDidChange:;
+ (id)sharedDelegator;
@end
