@interface AWEAdInteractiveVideoModel : MTLModel
@property (nonatomic) NSString videoId;
@property (nonatomic) q videoType;
@property (nonatomic) AWEVideoModel video;
@property (nonatomic) AWEAdPlayableAudioInfo audioInfo;
@property (nonatomic) NSArray nextGroupAwemeIDs;
@property (nonatomic) NSString playableCurrentSectionRemark;
@property (nonatomic) NSString playableCurrentSection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playableCurrentSection;
- (id)nextGroupAwemeIDs;
- (void)setNextGroupAwemeIDs:;
- (id)playableCurrentSectionRemark;
- (void)setPlayableCurrentSectionRemark:;
- (void)setPlayableCurrentSection:;
- (id)video;
- (void)setVideo:;
- (long long)videoType;
- (void)setVideoId:;
- (void).cxx_destruct;
- (void)setVideoType:;
- (id)videoId;
- (id)audioInfo;
- (void)setAudioInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
