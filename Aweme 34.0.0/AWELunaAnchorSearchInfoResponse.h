@interface AWELunaAnchorSearchInfoResponse : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray tracks;
- (id)cursor;
- (id)tracks;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTracks:;
+ (id)tracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
