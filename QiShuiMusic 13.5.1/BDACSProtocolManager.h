@interface BDACSProtocolManager : NSObject
@property (nonatomic) HMDTTMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (void)eventData:;
- (void)monitorService:category:;
- (void)monitorService:category:extra:;
- (void)monitorService:value:category:extra:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (id)commonTrackParamsWith:logExtra:adExtraData:;
+ (id)protocolImp;
+ (id)sharedInstance;
@end
