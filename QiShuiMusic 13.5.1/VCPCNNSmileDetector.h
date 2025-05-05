@interface VCPCNNSmileDetector : NSObject
- (id)getInputBuffer;
- (int)computeSmileScore:;
- (int)detectSmileForFace:inBuffer:smile:;
+ (id)detector;
@end
