@interface CUNetInterfaceMonitor : NSObject
@property (nonatomic) I controlFlags;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
@property (nonatomic) I flags;
@property (nonatomic) @? flagsChangedHandler;
@property (nonatomic) NSArray interfaces;
@property (nonatomic) @? interfacesChangedHandler;
@property (nonatomic) (?={sockaddr=CC[14c]}{sockaddr_in=CCS{in_addr=I}[8c]}{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}) primaryIPv4Addr;
@property (nonatomic) (?={sockaddr=CC[14c]}{sockaddr_in=CCS{in_addr=I}[8c]}{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}) primaryIPv6Addr;
@property (nonatomic) @? primaryIPChangedHandler;
@property (nonatomic) @? primaryNetworkChangedHandler;
@property (nonatomic) NSString primaryNetworkSignature;
- (unsigned int)controlFlags;
- (id)primaryIPv4Addr;
- (id)init;
- (void)setControlFlags:;
- (id)primaryIPChangedHandler;
- (void)setPrimaryNetworkChangedHandler:;
- (void)dealloc;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)_ensureStopped;
- (void)setDispatchQueue:;
- (void)setLabel:;
- (id)label;
- (void)setInterfaces:;
- (void)_ensureStarted;
- (id)interfacesChangedHandler;
- (void)setInterfacesChangedHandler:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (id)primaryNetworkSignature;
- (id)interfaces;
- (void).cxx_destruct;
- (id)primaryIPv6Addr;
- (void)_primaryIPChanged:;
- (id)flagsChangedHandler;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)description;
- (void)_networkInterfacesChanged:;
- (id)primaryNetworkChangedHandler;
- (void)setPrimaryIPChangedHandler:;
- (unsigned int)flags;
- (void)invalidate;
- (void)setFlagsChangedHandler:;
@end
