@interface IESLiveTeamfightEggInfo : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary teamEggMap;
@property (nonatomic) Q teamEggMap_Count;
@property (nonatomic) NSInteger teamBattleTeamType;
+ (id)descriptor;
@end
