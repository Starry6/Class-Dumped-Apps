@interface AWEMusicStreamingImpl.LunaGetTrackV2Request : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString mediaType;
@property (nonatomic) NSString queueType;
@property (nonatomic) NSString diversionAnchorType;
- (id)diversionAnchorType;
- (void)setDiversionAnchorType:;
- (Class)responseModelClass;
- (void)setMediaType:;
- (id)init;
- (id)mediaType;
- (id)path;
- (id)id;
- (void).cxx_destruct;
- (id)params;
- (void)setId:;
- (id)queueType;
- (void)setQueueType:;
@end
