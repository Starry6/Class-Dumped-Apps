@interface HTSLiveTeamfightCustomTeamConfig : IESLivePBBaseMessage
@property (nonatomic) BOOL anchorInvolved;
@property (nonatomic) GPBInt64ObjectDictionary teamConfigMap;
@property (nonatomic) Q teamConfigMap_Count;
@property (nonatomic) HTSLiveTeamfightTeamConfigUser anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) NSInteger defaultTeamType;
+ (id)descriptor;
@end
