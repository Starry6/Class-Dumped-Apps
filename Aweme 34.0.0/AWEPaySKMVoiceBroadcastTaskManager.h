@interface AWEPaySKMVoiceBroadcastTaskManager : NSObject
@property (nonatomic) AWEPaySKMVoiceBroadcastPlayer voicePlayer;
@property (nonatomic) NSMutableArray taskQueue;
@property (nonatomic) BOOL isBroadcasting;
@property (nonatomic) AWEPaySKMVoiceBroadcastTask currentTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playAudioWithAmountStr:audioUrl:;
- (void)playAudioWithAmountStr:audioUrl:completion:;
- (void)audioPlayerDidFinishPlayingTask:;
- (void)addAudioTask:;
- (id)voicePlayer;
- (void)setVoicePlayer:;
- (id)currentTask;
- (void)setCurrentTask:;
- (id)taskQueue;
- (void).cxx_destruct;
- (void)setTaskQueue:;
- (BOOL)isBroadcasting;
- (void)setIsBroadcasting:;
@end
