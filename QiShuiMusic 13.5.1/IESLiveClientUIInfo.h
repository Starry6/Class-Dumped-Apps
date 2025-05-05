@interface IESLiveClientUIInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveAudioChatCycleUIInfo audioChatCycle;
@property (nonatomic) BOOL hasAudioChatCycle;
@property (nonatomic) IESLiveRealTimeChorusUIInfo realTimeChorus;
@property (nonatomic) BOOL hasRealTimeChorus;
@property (nonatomic) IESLiveVideoChatDynamic1V7Info videoChatDynamic1V7;
@property (nonatomic) BOOL hasVideoChatDynamic1V7;
+ (id)descriptor;
@end
