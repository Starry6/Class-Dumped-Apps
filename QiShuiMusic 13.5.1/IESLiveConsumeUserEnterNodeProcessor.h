@interface IESLiveConsumeUserEnterNodeProcessor : IESLiveUserEnterNodeProcessor
- (id)compressLowPriorityNodeWithOldNode:newNode:;
- (void)createNodeViewWithNode:frame:completion:;
- (BOOL)enableUserEnterWithMessage:;
- (BOOL)replaceNodeIfNeed:;
- (id)viewFrameWithNode:;
@end
