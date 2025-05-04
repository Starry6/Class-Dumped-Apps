@interface AWENoxusPlayerInfoRecorder : NSObject
@property (nonatomic) NSMutableDictionary timeDic;
@property (nonatomic) NSMutableDictionary episodeDic;
@property (nonatomic) q pixelType;
@property (nonatomic) NSDate playerTipDate;
@property (nonatomic) q speedType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)getPlayTime:;
- (void)setTimeDic:;
- (id)timeDic;
- (long long)speedType;
- (void)setSpeedType:;
- (id)episodeDic;
- (void)cacheTimeDict:epiDict:;
- (void)recordModel:playTime:;
- (id)getLatestEpisode:;
- (id)getLatestEpisodeAlbumID:;
- (id)playerTipDate;
- (void)setPlayerTipDate:;
- (void)setEpisodeDic:;
- (id)init;
- (void).cxx_destruct;
- (long long)pixelType;
- (void)setPixelType:;
+ (id)sharedInstance;
@end
