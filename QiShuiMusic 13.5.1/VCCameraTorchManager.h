@interface VCCameraTorchManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)openTorchDevice;
- (void)closeTorchDevice;
- (void)turnTorchOn;
- (void)turnTorchOff;
- (void)turnTorch:;
@end
