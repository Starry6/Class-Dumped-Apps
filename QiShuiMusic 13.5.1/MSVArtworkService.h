@interface MSVArtworkService : NSObject
@property (nonatomic) NSOperationQueue serviceThrottlingOperationQueue;
@property (nonatomic) NSXPCConnection serverConnection;
- (void)setServerConnection:;
- (id)serverConnection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)sendRequest:completionHandler:;
- (id)serviceThrottlingOperationQueue;
- (void)setServiceThrottlingOperationQueue:;
+ (id)sharedService;
@end
