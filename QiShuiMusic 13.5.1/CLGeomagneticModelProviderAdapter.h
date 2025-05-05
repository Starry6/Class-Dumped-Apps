@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)endService;
- (id)adaptee;
- (BOOL)syncgetDoSync:;
- (void)fetchGeomagneticModelData:;
- (void)beginService;
- (void)doAsync:withReply:;
- (void)doAsync:;
+ (BOOL)isSupported;
+ (void)becameFatallyBlocked:index:;
+ (void)performSyncOnSilo:invoker:;
+ (id)getSilo;
@end
