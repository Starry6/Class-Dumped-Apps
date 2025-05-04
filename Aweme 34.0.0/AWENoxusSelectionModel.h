@interface AWENoxusSelectionModel : AWEBaseApiModel
@property (nonatomic) NSString episodeID;
@property (nonatomic) NSString iconURL;
@property (nonatomic) q seq;
@property (nonatomic) Q subscriptStatus;
@property (nonatomic) NSNumber episode;
@property (nonatomic) BOOL isFocused;
@property (nonatomic) BOOL isLanscape;
- (void)setEpisodeID:;
- (unsigned long long)subscriptStatus;
- (void)setSubscriptStatus:;
- (BOOL)isLanscape;
- (void)setIsLanscape:;
- (void)setIconURL:;
- (BOOL)isFocused;
- (id)iconURL;
- (void).cxx_destruct;
- (void)setIsFocused:;
- (id)episode;
- (void)setEpisode:;
- (void)setSeq:;
- (long long)seq;
- (id)episodeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
