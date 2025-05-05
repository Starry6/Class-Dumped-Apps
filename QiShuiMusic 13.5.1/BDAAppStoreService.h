@interface BDAAppStoreService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (void)bdxPublishEventWithEventName:params:;
- (void)eventData:;
- (void)hmdTrackService:params:;
- (void)monitorService:value:extra:;
- (id)ntType;
- (void)performanceEventV3:params:;
- (id)init;
+ (id)protocolImp;
+ (id)sharedInstance;
@end
