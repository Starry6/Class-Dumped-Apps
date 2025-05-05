@interface ASDClipSession : NSObject
@property (nonatomic) <ASDClipSessionDelegate> delegate;
@property (nonatomic) NSUUID uniqueID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequest:;
- (id)uniqueID;
- (void)setDelegate:;
- (id)initWithRequest:delegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)channelNotifyDidComplete;
- (void)channelNotifyDidFailWithError:;
- (void)channelNotifyDidInstallPlaceholder;
- (void)channelNotifyDidProgress:;
- (void)channelStateDidOpen;
- (void)channelStateDidClose;
- (id)initWithRequest:delegate:usingBroker:;
- (void)startDownloadWithCompletionHandler:;
- (void)cancelInstallWithCompletionHandler:;
- (void)continueInstallWithCompletionHandler:;
- (void)downloadAndInstallWithCompletionHandler:;
- (void)installPlaceholderWithCompletionHandler:;
@end
