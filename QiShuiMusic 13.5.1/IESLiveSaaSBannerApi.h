@interface IESLiveSaaSBannerApi : HTSLiveApi
@property (nonatomic) Q bannerType;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber liveAdType;
@property (nonatomic) NSNumber episodeID;
- (void)fetchVSVideoTopBannersCallback:;
- (id)initWithRoomID:;
- (void)fetchInRoomBannersWithCallback:;
- (void)fetchLivePageBannersWithPageType:callback:;
- (id)initWithType:roomID:;
- (id)liveAdType;
- (void)setEpisodeID:;
- (void)setLiveAdType:;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)bannerType;
- (void)setBannerType:;
- (id)roomID;
- (id)episodeID;
@end
