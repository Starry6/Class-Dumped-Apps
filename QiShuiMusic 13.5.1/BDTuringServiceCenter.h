@interface BDTuringServiceCenter : NSObject
@property (nonatomic) NSMutableDictionary services;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)popVerifyViewWithModel:;
- (id)serviceForName:appID:;
- (void)unregisterAllServices;
- (id)init;
- (void)setServices:;
- (void)registerService:;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (void)unregisterService:;
- (id)semaphore;
- (id)services;
+ (id)defaultCenter;
@end
