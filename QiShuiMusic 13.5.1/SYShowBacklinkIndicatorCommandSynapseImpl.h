@interface SYShowBacklinkIndicatorCommandSynapseImpl : NSObject
@property (nonatomic) SYBacklinkIndicatorClient _client;
@property (nonatomic) BOOL didSucceed;
@property (nonatomic) BOOL active;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_client;
- (void).cxx_destruct;
- (void)set_client:;
- (void)runWithCompletion:;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)didSucceed;
- (void)setDidSucceed:;
- (id)initWithDomainIdentifiers:linkIdentifiers:;
@end
