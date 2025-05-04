@interface AWELivePreStreamXBridgeHandler : NSObject
@property (nonatomic) NSMutableArray subscribeList;
- (id)subscribeList;
- (void)setSubscribeList:;
- (void)registerSubscribes;
- (void)unregisterSubscribes;
- (void)registerPreviewShowClick;
- (void)registerPreviewInteractEnterRoom;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedHandler;
@end
