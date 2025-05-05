@interface VCPCNNFastGestureRecognition : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)planDestroy;
- (int)createInput:keypoints:;
- (int)getDetectionScore:;
- (int)gestureDetection:score:;
+ (id)detector;
@end
