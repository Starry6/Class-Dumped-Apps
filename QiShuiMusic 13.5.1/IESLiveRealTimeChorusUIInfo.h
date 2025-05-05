@interface IESLiveRealTimeChorusUIInfo : IESLivePBBaseMessage
@property (nonatomic) q chorusId;
@property (nonatomic) q segment;
@property (nonatomic) GPBInt64ObjectDictionary userInfos;
@property (nonatomic) Q userInfos_Count;
@property (nonatomic) BOOL isAnchorJoinedChorus;
+ (id)descriptor;
@end
