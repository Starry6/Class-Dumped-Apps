@interface AWEKnowledgePlayStateResultHandler : NSObject
@property (nonatomic) <AFDRichContentContainerViewControllerProtocol><AWEAwemeBizPlayVideoProtocol><AWEKnowledgePlayResultControlProtocol> playControl;
@property (nonatomic) <AWEKnowledgeAudioControlProtocol> audioControl;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)registerObject:;
- (void)setPlayControl:;
- (void)changeMuteState:forReason:;
- (id)playControl;
- (void)card:didUpdateStateAtScene:withParam:actionType:oldInfo:withCompletion:;
- (void)quickStartCompletion:;
- (void)unregisterObject;
- (BOOL)isPlaying;
- (void).cxx_destruct;
- (void)setIsPlaying:;
- (id)audioControl;
- (void)setAudioControl:;
+ (BOOL)enableHandleObject:;
@end
