@interface AWEPayScanImageUploader : NSObject
@property (nonatomic) AWEIMRedPacketUploadImageClient client;
- (void)uploadWithImageDataArray:info:completion:;
- (void)setClient:;
- (id)client;
- (void).cxx_destruct;
@end
