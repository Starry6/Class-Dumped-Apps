@interface HTSLiveLinkerSwitchSceneContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveSwitchSceneData switchSceneData;
@property (nonatomic) BOOL hasSwitchSceneData;
+ (id)descriptor;
@end
