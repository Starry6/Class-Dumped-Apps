@interface AVCCaptionsClient : NSObject
@property (nonatomic) <AVCCaptionsClientDelegate> delegate;
@property (nonatomic) BOOL captionsSupported;
@property (nonatomic) BOOL captionsEnabled;
@property (nonatomic) q streamToken;
- (void)dealloc;
- (void)disconnect;
- (id)delegate;
- (BOOL)connect;
- (long long)streamToken;
- (id)initWithDelegate:streamToken:;
- (void)configureCaptions:;
- (BOOL)captionsEnabled;
- (void)enableCaptions:;
- (void)didEnableCaptions:error:;
- (void)didDisableCaptions:error:;
- (BOOL)captionsSupported;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)captionsResultsWithInternalResults:;
- (void)didStartCaptioningWithReason:;
- (void)didStopCaptioningWithReason:;
- (void)didUpdateCaptions:isRemote:;
+ (BOOL)isCaptioningSupported;
@end
