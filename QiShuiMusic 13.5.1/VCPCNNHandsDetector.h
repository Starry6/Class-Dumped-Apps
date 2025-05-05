@interface VCPCNNHandsDetector : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)nonMaxSuppression:;
- (int)copyImage:toData:;
- (id)initWithMaxNumRegions:forceCPU:sharedModel:inputConfig:revision:;
- (int)updateModelWithResConfig:;
- (int)createModelWithResConfig:;
- (int)createInput:withBuffer:;
- (int)generateHandsBoxes:;
- (int)retrieveBoxes:outHeight:outWidth:boxes:anchorBox:;
- (int)generateHandsRegions:boxes:maxNumRegions:;
- (int)drawLine:width:height:stride:point0:point1:drawPoint:;
- (int)drawRectangle:width:height:stride:keypoints:;
- (int)handsDetection:handsRegions:cancel:;
+ (id)detector:forceCPU:sharedModel:inputConfig:revision:;
@end
