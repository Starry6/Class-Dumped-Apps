@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput
@property (nonatomic) NSAttributedString overlayString;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) float rotation;
- (id)boundingBox;
- (void)setRotation:;
- (float)rotation;
- (void)setBoundingBox:;
- (void)setOverlayString:;
- (id)overlayString;
@end
