@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)endService;
- (int)syncgetPendingSetBiasCount;
- (id)adaptee;
- (BOOL)syncgetDoSync:;
- (void)setBias:withMagneticField:level:magnitude:inclination:;
- (void)beginService;
- (void)dumpDatabase:onCompletion:;
- (void)getBiasWithMagneticField:acceleration:;
- (void)doAsync:withReply:;
- (BOOL)syncgetLookupBiasWithMagneticField:acceleration:bias:level:noResults:;
- (void)doAsync:;
+ (BOOL)isSupported;
+ (void)becameFatallyBlocked:index:;
+ (void)performSyncOnSilo:invoker:;
+ (id)getSilo;
@end
