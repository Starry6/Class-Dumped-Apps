@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem
@property (nonatomic) Q contentType;
@property (nonatomic) NSString playlistGlobalID;
@property (nonatomic) q storeAdamID;
@property (nonatomic) Q tasteType;
- (void)setContentType:;
- (id)copyWithZone:;
- (void)setStoreAdamID:;
- (void)setPlaylistGlobalID:;
- (void)setTasteType:;
@end
