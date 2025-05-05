@interface BiometricKitEnrollProgressInfo : NSObject
@property (nonatomic) q progress;
@property (nonatomic) q currentPrimaryComponentID;
@property (nonatomic) NSDictionary captureImage;
@property (nonatomic) NSDictionary renderedImage;
@property (nonatomic) NSInteger message;
@property (nonatomic) NSDictionary messageDetails;
- (id)init;
- (void)dealloc;
- (void)setMessage:;
- (id)renderedImage;
- (void)setProgress:;
- (long long)progress;
- (int)message;
- (void).cxx_destruct;
- (long long)currentPrimaryComponentID;
- (void)setCurrentPrimaryComponentID:;
- (id)captureImage;
- (void)setCaptureImage:;
- (void)setRenderedImage:;
- (id)messageDetails;
- (void)setMessageDetails:;
@end
