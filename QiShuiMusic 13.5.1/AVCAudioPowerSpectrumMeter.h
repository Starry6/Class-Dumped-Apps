@interface AVCAudioPowerSpectrumMeter : NSObject
@property (nonatomic) <AVCAudioPowerSpectrumMeterDelegate> delegate;
@property (nonatomic) I sessionToken;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)setupXPCConnection;
- (id)delegateQueue;
- (id)delegate;
- (void)deregisterBlocksForService;
- (unsigned int)sessionToken;
- (void)cleanupDelegate;
- (id)initWithConfig:delegate:queue:;
- (BOOL)unregisterPowerSpectrumForCellularTapType:error:;
- (void)unregisterPowerSpectrumForStreamToken:;
- (BOOL)registerPowerSpectrumForCellularTapType:error:;
- (void)registerPowerSpectrumForStreamToken:;
- (void)audioPowerSpectrumMeter:didUpdateAudioPowerSpectrums:;
- (void)registerBlocksForNotifications;
- (void)cleanupXPCConnection;
- (BOOL)storeDelegate:delegateQueue:;
- (BOOL)setupPowerSpectrumMeter;
- (void)cleanupPowerSpectrumMeter;
+ (unsigned int)cellularTapTypeWithClientCellularTapType:;
@end
