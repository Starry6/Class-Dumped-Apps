@interface IESLiveOutAuxStreamAudioFilePlayer : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSInteger auxAudioStreamID;
@property (nonatomic) q status;
@property (nonatomic) double auxStreamVolume;
@property (nonatomic) <IESLiveVideoGiftAudioPlayerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)auxStreamVolume;
- (int)auxAudioStreamID;
- (id)initWithConfiguration:url:error:;
- (void)setAuxAudioStreamID:;
- (void)setAuxStreamVolume:;
- (void)setStatus:;
- (id)url;
- (void)seekToTime:;
- (void)dealloc;
- (void)play;
- (void)setVolume:;
- (void)setDelegate:;
- (void)stop;
- (void)setUrl:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)status;
- (void)pause;
@end
