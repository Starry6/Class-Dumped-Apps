@interface MPContentTastePendingUpdateRecord : NSObject
@property (nonatomic) NSString playlistGlobalID;
@property (nonatomic) q storeAdamID;
@property (nonatomic) q tasteType;
@property (nonatomic) q type;
@property (nonatomic) NSUUID UUID;
- (id)playlistGlobalID;
- (long long)storeAdamID;
- (long long)type;
- (void).cxx_destruct;
- (id)UUID;
- (id)initWithPlaylistGlobalID:tasteType:;
- (id)initWithStoreAdamID:tasteType:;
- (void)_initializeWithType:tasteType:;
- (long long)tasteType;
@end
