@interface ICMutablePlayActivityEventContainerIDs : ICPlayActivityEventContainerIDs
@property (nonatomic) q adamID;
@property (nonatomic) NSString cloudAlbumID;
@property (nonatomic) Q cloudPlaylistID;
@property (nonatomic) NSString globalPlaylistID;
@property (nonatomic) NSString playlistVersionHash;
@property (nonatomic) NSString stationHash;
@property (nonatomic) NSString stationStringID;
@property (nonatomic) q stationID;
- (id)copyWithZone:;
- (void)setAdamID:;
- (void)setGlobalPlaylistID:;
- (void)setStationStringID:;
- (void)setCloudAlbumID:;
- (void)setStationHash:;
- (void)setStationID:;
- (void)setCloudPlaylistID:;
- (void)setPlaylistVersionHash:;
@end
