@interface IESLiveLinkMicProfitGetTeamfightConfResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array durationListArray;
@property (nonatomic) Q durationListArray_Count;
@property (nonatomic) q finishFallbackDelaySec;
@property (nonatomic) GPBEnumArray scoreTypeListArray;
@property (nonatomic) Q scoreTypeListArray_Count;
@property (nonatomic) NSMutableArray scoreTypeInfoListArray;
@property (nonatomic) Q scoreTypeInfoListArray_Count;
@property (nonatomic) NSMutableArray roomBattleThemeListArray;
@property (nonatomic) Q roomBattleThemeListArray_Count;
@property (nonatomic) HTSLiveTeamfightCustomTeamConfig customTeamConfig;
@property (nonatomic) BOOL hasCustomTeamConfig;
+ (id)descriptor;
@end
