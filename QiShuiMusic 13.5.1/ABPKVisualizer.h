@interface ABPKVisualizer : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)jointInImageDimensions:imageDimensions:;
- (int)generateStickFigureImageFrom:detectedBodies2d:confidences:skeletonDefinition:overlayImage:color:faceOnly:;
- (int)drawFaceBbox:detectedBodies2d:confidences:skeletonDefinition:overlayImage:color:;
- (void)drawFaceBboxEdgewithJoints:withSkeletonDefinition:fromPostion:toPosition:OnImage:color:;
- (void)overlayJoints:withSkeletonDefinition:confidences:OnImage:color:faceOnly:;
+ (void)_drawRectOfSize:posx:posy:pImage:red:green:blue:;
@end
