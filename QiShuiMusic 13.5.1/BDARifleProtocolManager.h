@interface BDARifleProtocolManager : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (void)trackAdEvent:tag:extra:adExtra:;
- (void)eventData:;
- (void)monitorService:category:;
- (void)monitorService:category:extra:;
- (void)monitorService:value:category:extra:;
- (void)performanceEventV3:params:;
- (void)trackURLs:event:;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)protocolImp;
+ (id)sharedInstance;
@end
