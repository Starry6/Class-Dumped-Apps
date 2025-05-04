@interface AWEOfflineMixVideoCacheInfoModel : NSObject
@property (nonatomic) NSString mixID;
@property (nonatomic) NSString mixName;
@property (nonatomic) NSNumber currentEpisode;
- (id)mixName;
- (id)mixID;
- (void)setMixName:;
- (void)setMixID:;
- (id)initWithMixInfoModel:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
@end
