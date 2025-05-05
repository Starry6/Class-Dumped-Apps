@interface HTSLiveOpenActivityData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage coverLabel;
@property (nonatomic) BOOL hasCoverLabel;
+ (id)descriptor;
@end
