@interface HTSLiveGameIntroduceMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveGameIntroduceShowMessage gameIntroduce;
@property (nonatomic) BOOL hasGameIntroduce;
+ (id)descriptor;
@end
