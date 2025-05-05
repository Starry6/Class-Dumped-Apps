@interface FBServiceFacilityServerClientHandle : NSObject
@property (nonatomic) <BSXPCServiceConnectionMessaging> clientHandle_messageBuilder;
@property (nonatomic) NSInteger pid;
@property (nonatomic) BSProcessHandle processHandle;
@property (nonatomic) RBSProcessIdentity processIdentity;
@property (nonatomic) BOOL suspended;
@property (nonatomic) NSString facilityID;
@property (nonatomic) <FBSServiceFacilityClientContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)processIdentity;
- (id)context;
- (id)clientHandle_messageBuilder;
- (id)prettyProcessDescription;
- (BOOL)isSuspended;
- (id)processHandle;
- (int)pid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFacilityID:connection:;
- (void)setContext:;
- (void)invalidate;
- (id)facilityID;
@end
