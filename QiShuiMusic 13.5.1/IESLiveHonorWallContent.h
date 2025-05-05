@interface IESLiveHonorWallContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveHonorWallBg honorWallBg;
@property (nonatomic) BOOL hasHonorWallBg;
@property (nonatomic) IESLiveText honorWallTopDisplay;
@property (nonatomic) BOOL hasHonorWallTopDisplay;
@property (nonatomic) IESLiveText honorWallBottomDisplay;
@property (nonatomic) BOOL hasHonorWallBottomDisplay;
+ (id)descriptor;
@end
