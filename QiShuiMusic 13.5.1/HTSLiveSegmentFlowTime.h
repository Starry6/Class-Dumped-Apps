@interface HTSLiveSegmentFlowTime : IESLivePBBaseMessage
@property (nonatomic) q startOffset;
@property (nonatomic) q endOffset;
@property (nonatomic) q startOffsetFlowTime;
+ (id)descriptor;
@end
