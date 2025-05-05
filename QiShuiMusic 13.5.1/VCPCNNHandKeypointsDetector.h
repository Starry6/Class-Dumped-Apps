@interface VCPCNNHandKeypointsDetector : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:offset:;
- (int)generateHandKeypoints:keypointConfidence:offset:;
- (int)copyImage:toData:;
- (int)createInput:withBuffer:cnnInputHeight:cnnInputWidth:box:;
- (int)cvtHeatmaps2Keypoints:outHeight:outWidth:inHeight:inWidth:outChannel:keypoints:keypointConfidence:offset:;
- (int)handKeypointsDetection:box:keypoints:keypointConfidence:forGFT:;
+ (id)detector:sharedModel:modelName:;
@end
