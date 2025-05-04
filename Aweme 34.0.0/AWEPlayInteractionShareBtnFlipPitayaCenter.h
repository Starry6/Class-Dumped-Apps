@interface AWEPlayInteractionShareBtnFlipPitayaCenter : NSObject
- (void)p_registerMessageHandlerWhenReady;
- (void)p_removeMessageHandler;
- (void)p_registerMessageHandler;
- (void)p_pitayaQueryPackageWithBusinessName:;
- (void)p_registerMessageHandlerForShareIconFlip;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
