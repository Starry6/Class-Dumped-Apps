@interface BDUGLocationContinueTask : NSObject
@property (nonatomic) NSMapTable subscriptionMap1;
@property (nonatomic) NSMapTable subscriptionMap2;
@property (nonatomic) NSMutableDictionary taskMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLocationWithTarget:desiredAccuracy:distanceFilter:dataLevel:uploadSource:intelUploadInterval:reverseGeo:option:cert:completionHandler:;
- (void)onReceivedWillEnterBackgroundNotification:;
- (void)removeAllLocations;
- (void)removeLocationWithTarget:;
- (void)setSubscriptionMap1:;
- (void)setSubscriptionMap2:;
- (id)subscriptionMap1;
- (id)subscriptionMap2;
- (id)init;
- (void)dealloc;
- (id)taskMap;
- (void).cxx_destruct;
- (void)setTaskMap:;
@end
