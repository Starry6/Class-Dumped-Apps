@interface HTSLiveLinkerChangePlayModeContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveChangePlayModeData changePlayModeData;
@property (nonatomic) BOOL hasChangePlayModeData;
+ (id)descriptor;
@end
