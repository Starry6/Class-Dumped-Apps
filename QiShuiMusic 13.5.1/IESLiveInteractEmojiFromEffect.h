@interface IESLiveInteractEmojiFromEffect : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} renderRect;
@property (nonatomic) {CGSize=dd} effectSize;
@property (nonatomic) double randomTimestamp;
@property (nonatomic) q multiSendEffectLevel;
@property (nonatomic) BOOL handlePlayer;
@property (nonatomic) IESLiveMultiVideoGiftController player;
@property (nonatomic) IESLiveVideoGiftMetalConfiguration configuration;
- (double)randomTimestamp;
- (BOOL)handlePlayer;
- (long long)multiSendEffectLevel;
- (id)renderRect;
- (void)setHandlePlayer:;
- (void)setMultiSendEffectLevel:;
- (void)setRandomTimestamp:;
- (void)setRenderRect:;
- (void)setConfiguration:;
- (id)player;
- (id)configuration;
- (void).cxx_destruct;
- (void)setPlayer:;
- (id)effectSize;
- (void)setEffectSize:;
@end
