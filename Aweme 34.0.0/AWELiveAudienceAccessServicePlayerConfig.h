@interface AWELiveAudienceAccessServicePlayerConfig : NSObject
@property (nonatomic) <IESLivePlayerController> player;
@property (nonatomic) BOOL prePullStreamDequeue;
- (BOOL)prePullStreamDequeue;
- (void)setPrePullStreamDequeue:;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
@end
