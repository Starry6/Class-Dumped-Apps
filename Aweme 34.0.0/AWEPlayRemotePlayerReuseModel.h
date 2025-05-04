@interface AWEPlayRemotePlayerReuseModel : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIViewController player;
@property (nonatomic) BOOL playerUseAudioMix;
- (void)clearPlayer;
- (BOOL)playerUseAudioMix;
- (id)initWithModel:player:useAudioMix:;
- (void)dealloc;
- (id)player;
- (id)model;
- (void).cxx_destruct;
@end
