@interface AWEPublishEditVideoRequestModel : MTLModel
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString originalVid;
@property (nonatomic) NSString musicInfo;
@property (nonatomic) NSString userVoiceAudioInfo;
@property (nonatomic) Q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicInfo;
- (void)setMusicInfo:;
- (id)originalVid;
- (void)setOriginalVid:;
- (id)userVoiceAudioInfo;
- (void)setUserVoiceAudioInfo:;
- (void)setScene:;
- (id)itemID;
- (void)setItemID:;
- (unsigned long long)scene;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
