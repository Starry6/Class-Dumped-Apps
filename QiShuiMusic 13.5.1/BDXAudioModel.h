@interface BDXAudioModel : NSObject
@property (nonatomic) NSString modelId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString artist;
@property (nonatomic) NSString albumTitle;
@property (nonatomic) double playbackDuration;
@property (nonatomic) NSString albumCoverUrl;
@property (nonatomic) NSString playUrl;
@property (nonatomic) NSString localUrl;
@property (nonatomic) BOOL canBackgroundPlay;
@property (nonatomic) NSArray localPath;
@property (nonatomic) NSDictionary eventData;
@property (nonatomic) q playActionTimes;
@property (nonatomic) BDXAudioVideoModel playModel;
- (long long)playActionTimes;
- (id)playUrl;
- (id)albumCoverUrl;
- (BOOL)canBackgroundPlay;
- (id)localUrl;
- (id)playModel;
- (void)setAlbumCoverUrl:;
- (void)setCanBackgroundPlay:;
- (void)setLocalUrl:;
- (void)setPlayActionTimes:;
- (void)setPlayModel:;
- (void)setPlayUrl:;
- (id)artist;
- (void)setArtist:;
- (double)playbackDuration;
- (void)setPlaybackDuration:;
- (void)setTitle:;
- (id)modelId;
- (id)title;
- (void)setModelId:;
- (void).cxx_destruct;
- (id)eventData;
- (BOOL)isVerified;
- (void)setEventData:;
- (id)localPath;
- (id)albumTitle;
- (void)setAlbumTitle:;
- (id)initWithJSONDict:;
- (void)setLocalPath:;
@end
