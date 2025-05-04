@interface AWEMusicStreamingImpl.LunaTrackSearchResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSArray resultGroups;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString cursor;
@property (nonatomic) _TtC21AWEMusicStreamingImpl15LunaSearchGroup group;
@property (nonatomic) NSArray trackLyricInfos;
@property (nonatomic) NSArray trackItems;
- (id)trackLyricInfos;
- (void)setTrackLyricInfos:;
- (id)trackItems;
- (id)cursor;
- (id)initWithDictionary:error:;
- (id)init;
- (id)group;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)resultGroups;
- (void)setResultGroups:;
+ (id)resultGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
