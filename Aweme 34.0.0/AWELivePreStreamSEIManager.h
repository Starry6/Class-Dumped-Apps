@interface AWELivePreStreamSEIManager : NSObject
@property (nonatomic) NSHashTable subscribersForAll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscribersForAll;
- (void)setSubscribersForAll:;
- (void)addPreViewSubscrber:;
- (void)removePreViewSubscrber:;
- (void)onReceivePlayerSEI:;
- (void)dispatchSEI:;
- (void)enumerate:sendSEI:;
- (id)init;
- (void).cxx_destruct;
@end
