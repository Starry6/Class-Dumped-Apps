@interface AWEEffectPlatformTrackModel : MTLModel
@property (nonatomic) NSString trackName;
@property (nonatomic) NSNumber successStatus;
@property (nonatomic) NSNumber failStatus;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSString effectIDKey;
@property (nonatomic) NSString effectNameKey;
@property (nonatomic) NSDictionary trackInfoDict;
@property (nonatomic) @? extraTrackInfoDictBlock;
- (id)trackInfoDict;
- (void)setTrackInfoDict:;
- (void)setFailStatus:;
- (id)failStatus;
- (void)setSuccessStatus:;
- (id)effectIDKey;
- (id)effectNameKey;
- (id)extraTrackInfoDictBlock;
- (void)setEffectIDKey:;
- (void)setEffectNameKey:;
- (void)setExtraTrackInfoDictBlock:;
- (void)setStartTime:;
- (void).cxx_destruct;
- (id)startTime;
- (id)successStatus;
- (void)setTrackName:;
- (id)trackName;
+ (id)modernStickerTrackModel;
@end
