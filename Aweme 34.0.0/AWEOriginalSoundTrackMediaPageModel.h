@interface AWEOriginalSoundTrackMediaPageModel : AWEBaseApiModel
@property (nonatomic) NSArray mediaList;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
- (id)mediaList;
- (void)setMediaList:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
