@interface VCMomentsManager : NSObject
@property (nonatomic) <VCMomentsMessengerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)registerBlocksForService;
- (id)delegate;
- (void)notifyClientsWithStreamToken:service:arguments:;
- (void)streamToken:didStartProcessingRequest:error:;
- (void)streamToken:didEndProcessingRequest:stillImageURL:movieURL:error:;
- (void)streamToken:didFinishRequest:didSucceed:;
- (void)streamTokenDidCleanupAllRequests:;
- (void)registerMomentsMessenger:withStreamToken:;
- (void)unregisterMomentsMessengerWithStreamToken:;
- (id)messengerFromClientContext:;
- (void)saveImage:movie:;
- (id)newRequestWithArguments:state:;
+ (id)sharedInstance;
@end
