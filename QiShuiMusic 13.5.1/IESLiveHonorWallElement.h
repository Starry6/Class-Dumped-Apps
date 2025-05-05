@interface IESLiveHonorWallElement : IESLivePBBaseMessage
@property (nonatomic) NSInteger id_p;
@property (nonatomic) IESLiveHonorWallContent honorWallContent;
@property (nonatomic) BOOL hasHonorWallContent;
@property (nonatomic) IESLiveExtraInfo extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
