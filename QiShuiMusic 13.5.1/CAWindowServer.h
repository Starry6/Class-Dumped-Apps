@interface CAWindowServer : NSObject
@property (nonatomic) NSArray displays;
@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) I rendererFlags;
@property (nonatomic) BOOL secure;
@property (nonatomic) @? slotDeletionCallback;
- (BOOL)isSecure;
- (id)displays;
- (void)removeAllDisplays;
- (id)init;
- (void)dealloc;
- (void)removeDisplay:;
- (id)displayWithName:;
- (unsigned int)taskNamePortOfContextId:;
- (void)setSlotDeletionCallback:;
- (unsigned int)rendererFlags;
- (void)setMirroringEnabled:;
- (void)setSecure:;
- (BOOL)isSlotValid:;
- (unsigned int)clientPortOfContextId:;
- (BOOL)isMirroringEnabled;
- (void)_detectDisplays;
- (void)addDisplay:;
- (id)secureModeViolations;
- (id)displayWithUniqueId:;
- (void)setRendererFlags:;
- (id)description;
- (id)_init;
- (id)displayWithDisplayId:;
- (unsigned int)contextIdHostingContextId:;
- (id)slotDeletionCallback;
- (id)insecureProcessIds;
+ (id)context;
+ (id)server;
+ (void)stopServer;
+ (id)contextWithOptions:;
+ (id)serverWithOptions:;
+ (id)serverIfRunning;
@end
