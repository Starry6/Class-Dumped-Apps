@interface AWEMusicStreamingImpl.LunaDislikeRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) Q itemType;
@property (nonatomic) NSArray authorIDs;
@property (nonatomic) NSString itemID;
@property (nonatomic) q actionType;
- (id)authorIDs;
- (void)setAuthorIDs:;
- (Class)responseModelClass;
- (unsigned long long)itemType;
- (long long)actionType;
- (void)setActionType:;
- (id)itemID;
- (void)setItemType:;
- (void)setItemID:;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (id)params;
@end
