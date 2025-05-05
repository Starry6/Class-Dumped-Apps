@interface IESMMQRScanArea : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} targetRect;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cameraRect;
- (id)cameraRect;
- (id)initWithCameraRect:targetRect:;
- (void)setCameraRect:;
- (id)targetRect;
- (void)setTargetRect:;
@end
