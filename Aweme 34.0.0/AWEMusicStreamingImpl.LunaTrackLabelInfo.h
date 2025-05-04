@interface AWEMusicStreamingImpl.LunaTrackLabelInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) BOOL onlySubscriberDownload;
@property (nonatomic) BOOL onlySubscriberPlayable;
@property (nonatomic) NSArray subscriberDownloadQualities;
@property (nonatomic) NSArray subscriberPlayableQualities;
@property (nonatomic) BOOL isOriginal;
@property (nonatomic) _TtC21AWEMusicStreamingImpl19LunaNewReleaseLabel newReleaseLabel;
@property (nonatomic) BOOL isOnSale;
- (BOOL)onlySubscriberPlayable;
- (void)setIsOriginal:;
- (BOOL)onlySubscriberDownload;
- (void)setOnlySubscriberDownload:;
- (void)setOnlySubscriberPlayable:;
- (id)subscriberDownloadQualities;
- (void)setSubscriberDownloadQualities:;
- (id)subscriberPlayableQualities;
- (void)setSubscriberPlayableQualities:;
- (id)newReleaseLabel;
- (void)setNewReleaseLabel:;
- (BOOL)isOnSale;
- (void)setIsOnSale:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (BOOL)isOriginal;
+ (id)newReleaseLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
