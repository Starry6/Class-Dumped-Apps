@interface AWEHPCombineSubscribeCenter : NSObject
@property (nonatomic) <AWEHPCombineSubscribeCenterDelegate> delegate;
@property (nonatomic) NSMutableDictionary subscriberMap;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAllWrappers;
- (id)getWrapperWithBusinessID:;
- (id)subscriberMap;
- (void)setupWrapper:;
- (void)wrapper:sendRequestWithBody:completion:;
- (void)addSubscriberWithConfig:;
- (void)setSubscriberMap:;
- (id)delegate;
- (void)setLock:;
- (id)initWithDelegate:;
- (id)lock;
- (void)setup;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)removeSubscriber:;
@end
