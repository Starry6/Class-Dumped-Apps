@interface AWELivePreStreamMessageManager : NSObject
@property (nonatomic) NSHashTable subscribersForAll;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (id)subscribersForAll;
- (void)setSubscribersForAll:;
- (void)enumerate:sendMessage:withDict:;
- (void)addPreViewSubscrber:;
- (void)removePreViewSubscrber:;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchMessage:;
- (void)messageReceived:;
@end
