@interface AWEPOIAnchoredExtension : AWEPOIBaseExtension
@property (nonatomic) BOOL hasBeenAnchored;
@property (nonatomic) NSArray anchoredNodeTags;
@property (nonatomic) NSString anchoredNodeTag;
@property (nonatomic) BOOL hasReceiveLastChunkData;
@property (nonatomic) NSDictionary poiAnchoredDelayedTime;
@property (nonatomic) NSMutableArray nodeTags;
- (void)didEndParseData:error:;
- (void)initializeExtension;
- (id)constData;
- (id)poiAnchoredDelayedTime;
- (void)scrollNodeIfNeedWithDelayMilliSeconds:;
- (BOOL)isLastChunk:;
- (void)setHasReceiveLastChunkData:;
- (id)nodeTags;
- (BOOL)hasReceiveLastChunkData;
- (id)anchoredNodeTags;
- (id)anchoredNodeTag;
- (void)setAnchoredNodeTag:;
- (void)anchoredToTargetNode;
- (BOOL)hasBeenAnchored;
- (void)enterFullScreenDelayMilliSeconds:;
- (void)setHasBeenAnchored:;
- (id)lastChunkName;
- (void)setAnchoredNodeTags:;
- (void)setPoiAnchoredDelayedTime:;
- (void)setNodeTags:;
- (void).cxx_destruct;
@end
