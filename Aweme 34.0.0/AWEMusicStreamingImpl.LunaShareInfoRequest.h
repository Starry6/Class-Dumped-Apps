@interface AWEMusicStreamingImpl.LunaShareInfoRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString itemType;
@property (nonatomic) NSString itemID;
@property (nonatomic) _TtC21AWEMusicStreamingImpl14OpenAnchorInfo openAnchorInfo;
- (id)openAnchorInfo;
- (void)setOpenAnchorInfo:;
- (Class)responseModelClass;
- (id)itemType;
- (id)itemID;
- (void)setItemType:;
- (void)setItemID:;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (id)params;
@end
