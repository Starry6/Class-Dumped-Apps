@interface VCPCNNPersonDetector : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)nonMaxSuppression:;
- (int)copyImage:toData:;
- (id)initWithMaxNumRegions:forceCPU:sharedModel:inputConfig:;
- (int)retrieveBoxes:outHeight:outWidth:boxes:anchorBox:;
- (int)createInput:withBuffer:inputHeight:inputWidth:;
- (int)generatePersonBoxes:;
- (int)generatePersonRegions:boxes:maxNumRegions:;
- (int)personDetection:personRegions:cancel:;
@end
