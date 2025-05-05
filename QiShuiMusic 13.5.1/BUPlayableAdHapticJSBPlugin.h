@interface BUPlayableAdHapticJSBPlugin : NSObject
@property (nonatomic) <BUPlayableHapticPlayer> hapticPlayer;
@property (nonatomic) NSArray methodList;
@property (nonatomic) @? sendEventBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bupl_playable_haptic_engine_initWithParam:;
- (id)bupl_playable_haptic_engine_invalidateWithParam:;
- (id)bupl_playable_haptic_engine_pauseWithParam:;
- (id)bupl_playable_haptic_engine_playWithParam:;
- (id)bupl_playable_haptic_engine_play_fileWithParam:;
- (id)bupl_playable_haptic_engine_play_innerWithParam:;
- (id)bupl_playable_haptic_engine_resumeWithParam:;
- (id)bupl_playable_haptic_engine_stopWithParam:;
- (id)bupl_playable_haptic_engine_supportsWithParam:;
- (id)methodList;
- (void)setMethodList:;
- (id)hapticPlayer;
- (void).cxx_destruct;
- (void)setHapticPlayer:;
- (id)sendEventBlock;
- (void)setSendEventBlock:;
@end
