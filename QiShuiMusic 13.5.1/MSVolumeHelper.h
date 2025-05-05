@interface MSVolumeHelper : NSObject
@property (nonatomic) NSInteger isMute;
@property (nonatomic) NSInteger isLockScreen;
@property (nonatomic) float curVolumeSize;
@property (nonatomic) float oriVolumeSize;
@property (nonatomic) @? silentNotify;
- (void)SystemVolumeDidChange:;
- (BOOL)checkTouchIDAndPasscodeStatus;
- (float)curVolumeSize;
- (float)oriVolumeSize;
- (void)setCurVolumeSize:;
- (void)setIsLockScreen:;
- (void)setIsMute:;
- (void)setOriVolumeSize:;
- (void)setSilentNotify:;
- (id)silentNotify;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)isLockScreen;
- (void)volumeChanged:;
- (int)isMute;
+ (id)sharedInstance;
@end
