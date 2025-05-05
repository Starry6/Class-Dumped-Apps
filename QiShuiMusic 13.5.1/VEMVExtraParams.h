@interface VEMVExtraParams : NSObject
@property (nonatomic) NSString extraParams;
@property (nonatomic) NSString recordParams;
@property (nonatomic) NSNumber generateVideoVolume;
@property (nonatomic) NSNumber generateMusicVolume;
- (void)setExtraParams:;
- (id)extraParams;
- (id)generateMusicVolume;
- (id)generateVideoVolume;
- (id)recordParams;
- (void)setGenerateMusicVolume:;
- (void)setGenerateVideoVolume:;
- (void)setRecordParams:;
- (void).cxx_destruct;
@end
