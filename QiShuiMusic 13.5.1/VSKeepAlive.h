@interface VSKeepAlive : NSObject
@property (nonatomic) q audioType;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL keepAudioSessionActive;
- (BOOL)active;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_serverConnection;
- (void)setActive:;
- (long long)audioType;
- (void)setAudioType:;
- (id)_remoteKeepAlive;
- (void)setKeepAudioSessionActive:;
- (void)_ensureKeepAliveMaintenance;
- (BOOL)keepAudioSessionActive;
@end
