@interface ByteRTCAudioVolumeInfo : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) Q linearVolume;
@property (nonatomic) Q nonlinearVolume;
- (unsigned long long)linearVolume;
- (void)setLinearVolume:;
- (unsigned long long)nonlinearVolume;
- (void)setNonlinearVolume:;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
@end
