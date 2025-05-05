@interface IESLiveMultiChannelInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL useMultiChannel;
@property (nonatomic) GPBInt64ObjectDictionary linkmicInfos;
@property (nonatomic) Q linkmicInfos_Count;
+ (id)descriptor;
@end
