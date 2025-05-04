@interface AWEFeedMultiDeviceVideoPlaySyncNetworkManager : NSObject
@property (nonatomic) <AWEFeedMultiDeviceVideoPlaySyncMessageHandleDelegateProtocol> messageHandleDelegate;
- (void)onPushManagerConnectionStateChanged:;
- (void)initFrontier;
- (void)setMessageHandleDelegate:;
- (void)receiveMessageFromFrontier:;
- (id)messageHandleDelegate;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)requestSyncVideoInfo:;
+ (void)uploadRecordSyncVideoInfo:andUploadType:uploadScene:parameter:completion:;
+ (void)pushMessageOnFrontier:;
@end
