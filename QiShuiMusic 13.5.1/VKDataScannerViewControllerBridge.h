@interface VKDataScannerViewControllerBridge : NSObject
@property (nonatomic) <VKDataScannerViewControllerBridgeDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)endSession;
- (void).cxx_destruct;
- (void)beginSessionForText:barcodes:;
+ (BOOL)isSupported;
+ (BOOL)isCameraRestricted;
@end
