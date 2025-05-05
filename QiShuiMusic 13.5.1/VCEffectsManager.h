@interface VCEffectsManager : NSObject
@property (nonatomic) <VCEffectsManagerDelegate> delegate;
@property (nonatomic) NSMutableArray effectsArray;
@property (nonatomic) ^{opaqueVCRemoteImageQueue=} senderQueue;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)registerBlocksForService;
- (id)delegate;
- (id)senderQueue;
- (void)remoteQueueOperationHandlerWithError:operation:;
- (void)flushRemoteQueue;
- (BOOL)createAllocators;
- (void)releaseAllocators;
- (void)encodeProcessedPixelBuffer:time:imageData:processTime:;
- (BOOL)initializeReceiveQueue:error:;
- (BOOL)isEffectsOn;
- (BOOL)isFaceMeshTrackingEnabled;
- (void)updateThermalLevel:;
- (void)capturedPixelBuffer:depthDataPixelBuffer:time:imageData:;
- (void)renderPixelBuffer:time:;
- (void)capturedPixelBuffer:depthBuffer:time:imageData:toClient:;
- (void)resetEffectsLogging;
- (BOOL)checkEffectsHealth;
- (void)effectsRegistered:;
- (id)effectsArray;
- (void)setEffectsArray:;
+ (id)sharedManager;
@end
