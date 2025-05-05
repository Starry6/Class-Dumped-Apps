@interface HTSLiveLandScapeConfig : IESLivePBBaseMessage
@property (nonatomic) BOOL isLandscapeSupported;
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) I bottom;
@property (nonatomic) I right;
+ (id)descriptor;
@end
