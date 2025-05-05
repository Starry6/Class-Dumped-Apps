@interface HTSLiveAnchorFaceConfig : IESLivePBBaseMessage
@property (nonatomic) BOOL contourEnable;
@property (nonatomic) q frequency;
@property (nonatomic) q userCount;
+ (id)descriptor;
@end
