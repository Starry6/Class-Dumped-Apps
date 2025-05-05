@interface VCCaptionsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)registerBlocksForService;
- (void)deregisterBlocksForService;
- (void)streamToken:didEnableCaptions:error:;
- (void)streamToken:didDisableCaptions:error:;
- (void)streamToken:didStartCaptioningWithReason:;
- (void)streamToken:didStopCaptioningWithReason:;
- (void)streamToken:didUpdateCaptions:;
- (void)registerCaptionsSource:streamToken:;
- (void)unregisterCaptionsSourceWithStreamToken:;
- (id)captionsSourceFromClientContext:;
- (void)notifyClientsWithStreamToken:service:arguments:;
+ (id)defaultManager;
@end
