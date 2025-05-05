@interface BSXPCServiceConnectionContext : NSObject
@property (nonatomic) NSString endpointDescription;
@property (nonatomic) BOOL server;
@property (nonatomic) BOOL client;
@property (nonatomic) BOOL root;
@property (nonatomic) BOOL child;
@property (nonatomic) BOOL nonLaunching;
- (id)init;
- (BOOL)isRoot;
- (BOOL)isServer;
- (id)endpointDescription;
- (BOOL)isNonLaunching;
- (void).cxx_destruct;
- (BOOL)isClient;
- (id)description;
- (BOOL)isChild;
- (id)copyWithZone:;
@end
