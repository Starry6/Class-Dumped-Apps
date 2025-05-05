@interface BDTuringService : NSObject
@property (nonatomic) NSString appID;
@property (nonatomic) NSString serviceName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerService;
- (id)initWithAppID:;
- (void)unregisterService;
- (id)serviceName;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (BOOL)serviceAvailable;
@end
