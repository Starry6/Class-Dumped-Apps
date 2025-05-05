@interface VCPCNNPetsDetector : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)copyImage:toData:withChannels:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:;
- (int)createModel:srcWidth:;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)generatePetsBoxes:faceBoxes:cancel:;
- (void)nonMaxSuppression:;
- (int)generatePetsRegions:outHeight:outWidth:boxes:faceBoxes:maxNumRegions:;
- (int)postProcBoxes:maxNumRegions:;
- (int)petsDetection:petsRegions:petsFaceRegions:cancel:;
+ (id)detector:;
@end
