@interface SUCoreConnectClientProxy : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> completionQueue;
@property (nonatomic) @? genericBlock;
@property (nonatomic) @? progressBlock;
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString clientIDRaw;
@property (nonatomic) NSInteger clientProcessIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completionQueue;
- (id)progressBlock;
- (int)clientProcessIdentifier;
- (id)initWithClientID:completionQueue:progressBlock:;
- (id)genericBlock;
- (id)initWithCoder:;
- (void)executeProgressBlock:;
- (void)encodeWithCoder:;
- (id)initWithClientID:completionQueue:genericBlock:progressBlock:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (id)initWithClientID:completionQueue:genericBlock:;
- (id)clientIDRaw;
- (id)clientID;
- (void)executeGenericBlock:;
+ (BOOL)supportsSecureCoding;
@end
