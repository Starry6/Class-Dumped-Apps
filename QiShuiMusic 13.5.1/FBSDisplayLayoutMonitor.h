@interface FBSDisplayLayoutMonitor : NSObject
@property (nonatomic) FBSDisplayLayout currentLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (unsigned long long)qualityOfService;
- (void)setHandler:;
- (id)currentLayout;
- (long long)displayType;
- (id)initWithDisplayType:qualityOfService:handler:;
- (id)initWithDisplayType:;
- (id)handler;
- (id)initWithDisplayType:handler:;
- (void).cxx_destruct;
- (id)_initWithConfiguration:singleton:needsDefaultPriority:mutable:displayType:mutableHandler:;
- (void)invalidate;
+ (id)interface;
+ (id)mainDisplayInstanceIdentifier;
+ (id)monitorWithConfiguration:;
+ (id)serviceIdentifier;
+ (id)_endpointForDisplayType:;
+ (id)sharedMonitorForDisplayType:;
@end
