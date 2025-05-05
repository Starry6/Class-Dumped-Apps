@interface ICPlayActivityEventContainerIDs : NSObject
@property (nonatomic) q adamID;
@property (nonatomic) NSString cloudAlbumID;
@property (nonatomic) Q cloudPlaylistID;
@property (nonatomic) NSString globalPlaylistID;
@property (nonatomic) NSString playlistVersionHash;
@property (nonatomic) NSString stationHash;
@property (nonatomic) NSString stationStringID;
@property (nonatomic) q stationID;
- (id)cloudAlbumID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)adamID;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (long long)stationID;
- (id)_copyWithClass:;
- (id)stationHash;
- (id)stationStringID;
- (id)globalPlaylistID;
- (unsigned long long)cloudPlaylistID;
- (id)playlistVersionHash;
+ (BOOL)supportsSecureCoding;
@end
