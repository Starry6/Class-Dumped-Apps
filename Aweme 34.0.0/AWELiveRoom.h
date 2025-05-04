@interface AWELiveRoom : AWEBaseApiModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber userCount;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) BOOL isAudioLive;
@property (nonatomic) NSNumber interactiveEnabled;
@property (nonatomic) AWELiveNearbyTV nearbyTV;
@property (nonatomic) AWELiveEpisodeExtra episodeExtra;
- (id)episodeExtra;
- (void)setEpisodeExtra:;
- (BOOL)isAudioLive;
- (void)setIsAudioLive:;
- (id)interactiveEnabled;
- (void)setInteractiveEnabled:;
- (id)nearbyTV;
- (id)roomID;
- (void)setHeight:;
- (void)setWidth:;
- (id)width;
- (void).cxx_destruct;
- (void)setRoomID:;
- (id)height;
- (void)setUserCount:;
- (id)userCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
