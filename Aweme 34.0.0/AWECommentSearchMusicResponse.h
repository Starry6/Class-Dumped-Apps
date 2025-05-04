@interface AWECommentSearchMusicResponse : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray musicList;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
- (id)extraModel;
- (void)setExtraModel:;
- (id)musicList;
- (void)setMusicList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)extraModelJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
